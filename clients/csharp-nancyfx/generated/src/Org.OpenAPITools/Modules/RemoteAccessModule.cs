using System;
using Nancy;
using Nancy.ModelBinding;
using System.Collections.Generic;
using Sharpility.Base;
using Org.OpenAPITools..Models;
using Org.OpenAPITools..Utils;
using NodaTime;

namespace Org.OpenAPITools..Modules
{ 

    /// <summary>
    /// Module processing requests of RemoteAccess domain.
    /// </summary>
    public sealed class RemoteAccessModule : NancyModule
    {
        /// <summary>
        /// Sets up HTTP methods mappings.
        /// </summary>
        /// <param name="service">Service handling requests</param>
        public RemoteAccessModule(RemoteAccessService service) : base("/")
        { 
            Get["/computer/api/json"] = parameters =>
            {
                var depth = Parameters.ValueOf<int?>(parameters, Context.Request, "depth", ParameterType.Query);
                Preconditions.IsNotNull(depth, "Required parameter: 'depth' is missing at 'GetComputer'");
                
                return service.GetComputer(Context, depth);
            };

            Get["/api/json"] = parameters =>
            {
                
                return service.GetJenkins(Context);
            };

            Get["/job/{name}/api/json"] = parameters =>
            {
                var name = Parameters.ValueOf<string>(parameters, Context.Request, "name", ParameterType.Path);
                Preconditions.IsNotNull(name, "Required parameter: 'name' is missing at 'GetJob'");
                
                return service.GetJob(Context, name);
            };

            Get["/job/{name}/config.xml"] = parameters =>
            {
                var name = Parameters.ValueOf<string>(parameters, Context.Request, "name", ParameterType.Path);
                Preconditions.IsNotNull(name, "Required parameter: 'name' is missing at 'GetJobConfig'");
                
                return service.GetJobConfig(Context, name);
            };

            Get["/job/{name}/lastBuild/api/json"] = parameters =>
            {
                var name = Parameters.ValueOf<string>(parameters, Context.Request, "name", ParameterType.Path);
                Preconditions.IsNotNull(name, "Required parameter: 'name' is missing at 'GetJobLastBuild'");
                
                return service.GetJobLastBuild(Context, name);
            };

            Get["/job/{name}/{number}/logText/progressiveText"] = parameters =>
            {
                var name = Parameters.ValueOf<string>(parameters, Context.Request, "name", ParameterType.Path);
                var number = Parameters.ValueOf<string>(parameters, Context.Request, "number", ParameterType.Path);
                var start = Parameters.ValueOf<string>(parameters, Context.Request, "start", ParameterType.Query);
                Preconditions.IsNotNull(name, "Required parameter: 'name' is missing at 'GetJobProgressiveText'");
                
                Preconditions.IsNotNull(number, "Required parameter: 'number' is missing at 'GetJobProgressiveText'");
                
                Preconditions.IsNotNull(start, "Required parameter: 'start' is missing at 'GetJobProgressiveText'");
                
                service.GetJobProgressiveText(Context, name, number, start);
                return new Response { ContentType = ""};
            };

            Get["/queue/api/json"] = parameters =>
            {
                
                return service.GetQueue(Context);
            };

            Get["/queue/item/{number}/api/json"] = parameters =>
            {
                var number = Parameters.ValueOf<string>(parameters, Context.Request, "number", ParameterType.Path);
                Preconditions.IsNotNull(number, "Required parameter: 'number' is missing at 'GetQueueItem'");
                
                return service.GetQueueItem(Context, number);
            };

            Get["/view/{name}/api/json"] = parameters =>
            {
                var name = Parameters.ValueOf<string>(parameters, Context.Request, "name", ParameterType.Path);
                Preconditions.IsNotNull(name, "Required parameter: 'name' is missing at 'GetView'");
                
                return service.GetView(Context, name);
            };

            Get["/view/{name}/config.xml"] = parameters =>
            {
                var name = Parameters.ValueOf<string>(parameters, Context.Request, "name", ParameterType.Path);
                Preconditions.IsNotNull(name, "Required parameter: 'name' is missing at 'GetViewConfig'");
                
                return service.GetViewConfig(Context, name);
            };

            Head["/api/json"] = parameters =>
            {
                
                service.HeadJenkins(Context);
                return new Response { ContentType = ""};
            };

            Post["/createItem"] = parameters =>
            {
                var name = Parameters.ValueOf<string>(parameters, Context.Request, "name", ParameterType.Query);
                var from = Parameters.ValueOf<string>(parameters, Context.Request, "from", ParameterType.Query);
                var mode = Parameters.ValueOf<string>(parameters, Context.Request, "mode", ParameterType.Query);
                var jenkinsCrumb = Parameters.ValueOf<string>(parameters, Context.Request, "jenkinsCrumb", ParameterType.Header);
                var contentType = Parameters.ValueOf<string>(parameters, Context.Request, "contentType", ParameterType.Header);
                var body = this.Bind<string>();
                Preconditions.IsNotNull(name, "Required parameter: 'name' is missing at 'PostCreateItem'");
                
                service.PostCreateItem(Context, name, from, mode, jenkinsCrumb, contentType, body);
                return new Response { ContentType = "*/*"};
            };

            Post["/createView"] = parameters =>
            {
                var name = Parameters.ValueOf<string>(parameters, Context.Request, "name", ParameterType.Query);
                var jenkinsCrumb = Parameters.ValueOf<string>(parameters, Context.Request, "jenkinsCrumb", ParameterType.Header);
                var contentType = Parameters.ValueOf<string>(parameters, Context.Request, "contentType", ParameterType.Header);
                var body = this.Bind<string>();
                Preconditions.IsNotNull(name, "Required parameter: 'name' is missing at 'PostCreateView'");
                
                service.PostCreateView(Context, name, jenkinsCrumb, contentType, body);
                return new Response { ContentType = "*/*"};
            };

            Post["/job/{name}/build"] = parameters =>
            {
                var name = Parameters.ValueOf<string>(parameters, Context.Request, "name", ParameterType.Path);
                var json = Parameters.ValueOf<string>(parameters, Context.Request, "json", ParameterType.Query);
                var token = Parameters.ValueOf<string>(parameters, Context.Request, "token", ParameterType.Query);
                var jenkinsCrumb = Parameters.ValueOf<string>(parameters, Context.Request, "jenkinsCrumb", ParameterType.Header);
                Preconditions.IsNotNull(name, "Required parameter: 'name' is missing at 'PostJobBuild'");
                
                Preconditions.IsNotNull(json, "Required parameter: 'json' is missing at 'PostJobBuild'");
                
                service.PostJobBuild(Context, name, json, token, jenkinsCrumb);
                return new Response { ContentType = ""};
            };

            Post["/job/{name}/config.xml"] = parameters =>
            {
                var name = Parameters.ValueOf<string>(parameters, Context.Request, "name", ParameterType.Path);
                var body = this.Bind<string>();var jenkinsCrumb = Parameters.ValueOf<string>(parameters, Context.Request, "jenkinsCrumb", ParameterType.Header);
                Preconditions.IsNotNull(name, "Required parameter: 'name' is missing at 'PostJobConfig'");
                
                Preconditions.IsNotNull(body, "Required parameter: 'body' is missing at 'PostJobConfig'");
                
                service.PostJobConfig(Context, name, body, jenkinsCrumb);
                return new Response { ContentType = "*/*"};
            };

            Post["/job/{name}/doDelete"] = parameters =>
            {
                var name = Parameters.ValueOf<string>(parameters, Context.Request, "name", ParameterType.Path);
                var jenkinsCrumb = Parameters.ValueOf<string>(parameters, Context.Request, "jenkinsCrumb", ParameterType.Header);
                Preconditions.IsNotNull(name, "Required parameter: 'name' is missing at 'PostJobDelete'");
                
                service.PostJobDelete(Context, name, jenkinsCrumb);
                return new Response { ContentType = ""};
            };

            Post["/job/{name}/disable"] = parameters =>
            {
                var name = Parameters.ValueOf<string>(parameters, Context.Request, "name", ParameterType.Path);
                var jenkinsCrumb = Parameters.ValueOf<string>(parameters, Context.Request, "jenkinsCrumb", ParameterType.Header);
                Preconditions.IsNotNull(name, "Required parameter: 'name' is missing at 'PostJobDisable'");
                
                service.PostJobDisable(Context, name, jenkinsCrumb);
                return new Response { ContentType = ""};
            };

            Post["/job/{name}/enable"] = parameters =>
            {
                var name = Parameters.ValueOf<string>(parameters, Context.Request, "name", ParameterType.Path);
                var jenkinsCrumb = Parameters.ValueOf<string>(parameters, Context.Request, "jenkinsCrumb", ParameterType.Header);
                Preconditions.IsNotNull(name, "Required parameter: 'name' is missing at 'PostJobEnable'");
                
                service.PostJobEnable(Context, name, jenkinsCrumb);
                return new Response { ContentType = ""};
            };

            Post["/job/{name}/lastBuild/stop"] = parameters =>
            {
                var name = Parameters.ValueOf<string>(parameters, Context.Request, "name", ParameterType.Path);
                var jenkinsCrumb = Parameters.ValueOf<string>(parameters, Context.Request, "jenkinsCrumb", ParameterType.Header);
                Preconditions.IsNotNull(name, "Required parameter: 'name' is missing at 'PostJobLastBuildStop'");
                
                service.PostJobLastBuildStop(Context, name, jenkinsCrumb);
                return new Response { ContentType = ""};
            };

            Post["/view/{name}/config.xml"] = parameters =>
            {
                var name = Parameters.ValueOf<string>(parameters, Context.Request, "name", ParameterType.Path);
                var body = this.Bind<string>();var jenkinsCrumb = Parameters.ValueOf<string>(parameters, Context.Request, "jenkinsCrumb", ParameterType.Header);
                Preconditions.IsNotNull(name, "Required parameter: 'name' is missing at 'PostViewConfig'");
                
                Preconditions.IsNotNull(body, "Required parameter: 'body' is missing at 'PostViewConfig'");
                
                service.PostViewConfig(Context, name, body, jenkinsCrumb);
                return new Response { ContentType = "*/*"};
            };
        }
    }

    /// <summary>
    /// Service handling RemoteAccess requests.
    /// </summary>
    public interface RemoteAccessService
    {
        /// <summary>
        /// Retrieve computer details
        /// </summary>
        /// <param name="context">Context of request</param>
        /// <param name="depth">Recursion depth in response model</param>
        /// <returns>ComputerSet</returns>
        ComputerSet GetComputer(NancyContext context, int? depth);

        /// <summary>
        /// Retrieve Jenkins details
        /// </summary>
        /// <param name="context">Context of request</param>
        /// <returns>Hudson</returns>
        Hudson GetJenkins(NancyContext context);

        /// <summary>
        /// Retrieve job details
        /// </summary>
        /// <param name="context">Context of request</param>
        /// <param name="name">Name of the job</param>
        /// <returns>FreeStyleProject</returns>
        FreeStyleProject GetJob(NancyContext context, string name);

        /// <summary>
        /// Retrieve job configuration
        /// </summary>
        /// <param name="context">Context of request</param>
        /// <param name="name">Name of the job</param>
        /// <returns>string</returns>
        string GetJobConfig(NancyContext context, string name);

        /// <summary>
        /// Retrieve job&#39;s last build details
        /// </summary>
        /// <param name="context">Context of request</param>
        /// <param name="name">Name of the job</param>
        /// <returns>FreeStyleBuild</returns>
        FreeStyleBuild GetJobLastBuild(NancyContext context, string name);

        /// <summary>
        /// Retrieve job&#39;s build progressive text output
        /// </summary>
        /// <param name="context">Context of request</param>
        /// <param name="name">Name of the job</param>
        /// <param name="number">Build number</param>
        /// <param name="start">Starting point of progressive text output</param>
        /// <returns></returns>
        void GetJobProgressiveText(NancyContext context, string name, string number, string start);

        /// <summary>
        /// Retrieve queue details
        /// </summary>
        /// <param name="context">Context of request</param>
        /// <returns>Queue</returns>
        Queue GetQueue(NancyContext context);

        /// <summary>
        /// Retrieve queued item details
        /// </summary>
        /// <param name="context">Context of request</param>
        /// <param name="number">Queue number</param>
        /// <returns>Queue</returns>
        Queue GetQueueItem(NancyContext context, string number);

        /// <summary>
        /// Retrieve view details
        /// </summary>
        /// <param name="context">Context of request</param>
        /// <param name="name">Name of the view</param>
        /// <returns>ListView</returns>
        ListView GetView(NancyContext context, string name);

        /// <summary>
        /// Retrieve view configuration
        /// </summary>
        /// <param name="context">Context of request</param>
        /// <param name="name">Name of the view</param>
        /// <returns>string</returns>
        string GetViewConfig(NancyContext context, string name);

        /// <summary>
        /// Retrieve Jenkins headers
        /// </summary>
        /// <param name="context">Context of request</param>
        /// <returns></returns>
        void HeadJenkins(NancyContext context);

        /// <summary>
        /// Create a new job using job configuration, or copied from an existing job
        /// </summary>
        /// <param name="context">Context of request</param>
        /// <param name="name">Name of the new job</param>
        /// <param name="from">Existing job to copy from (optional)</param>
        /// <param name="mode">Set to &#39;copy&#39; for copying an existing job (optional)</param>
        /// <param name="jenkinsCrumb">CSRF protection token (optional)</param>
        /// <param name="contentType">Content type header application/xml (optional)</param>
        /// <param name="body">Job configuration in config.xml format (optional)</param>
        /// <returns></returns>
        void PostCreateItem(NancyContext context, string name, string from, string mode, string jenkinsCrumb, string contentType, string body);

        /// <summary>
        /// Create a new view using view configuration
        /// </summary>
        /// <param name="context">Context of request</param>
        /// <param name="name">Name of the new view</param>
        /// <param name="jenkinsCrumb">CSRF protection token (optional)</param>
        /// <param name="contentType">Content type header application/xml (optional)</param>
        /// <param name="body">View configuration in config.xml format (optional)</param>
        /// <returns></returns>
        void PostCreateView(NancyContext context, string name, string jenkinsCrumb, string contentType, string body);

        /// <summary>
        /// Build a job
        /// </summary>
        /// <param name="context">Context of request</param>
        /// <param name="name">Name of the job</param>
        /// <param name="json"></param>
        /// <param name="token"> (optional)</param>
        /// <param name="jenkinsCrumb">CSRF protection token (optional)</param>
        /// <returns></returns>
        void PostJobBuild(NancyContext context, string name, string json, string token, string jenkinsCrumb);

        /// <summary>
        /// Update job configuration
        /// </summary>
        /// <param name="context">Context of request</param>
        /// <param name="name">Name of the job</param>
        /// <param name="body">Job configuration in config.xml format</param>
        /// <param name="jenkinsCrumb">CSRF protection token (optional)</param>
        /// <returns></returns>
        void PostJobConfig(NancyContext context, string name, string body, string jenkinsCrumb);

        /// <summary>
        /// Delete a job
        /// </summary>
        /// <param name="context">Context of request</param>
        /// <param name="name">Name of the job</param>
        /// <param name="jenkinsCrumb">CSRF protection token (optional)</param>
        /// <returns></returns>
        void PostJobDelete(NancyContext context, string name, string jenkinsCrumb);

        /// <summary>
        /// Disable a job
        /// </summary>
        /// <param name="context">Context of request</param>
        /// <param name="name">Name of the job</param>
        /// <param name="jenkinsCrumb">CSRF protection token (optional)</param>
        /// <returns></returns>
        void PostJobDisable(NancyContext context, string name, string jenkinsCrumb);

        /// <summary>
        /// Enable a job
        /// </summary>
        /// <param name="context">Context of request</param>
        /// <param name="name">Name of the job</param>
        /// <param name="jenkinsCrumb">CSRF protection token (optional)</param>
        /// <returns></returns>
        void PostJobEnable(NancyContext context, string name, string jenkinsCrumb);

        /// <summary>
        /// Stop a job
        /// </summary>
        /// <param name="context">Context of request</param>
        /// <param name="name">Name of the job</param>
        /// <param name="jenkinsCrumb">CSRF protection token (optional)</param>
        /// <returns></returns>
        void PostJobLastBuildStop(NancyContext context, string name, string jenkinsCrumb);

        /// <summary>
        /// Update view configuration
        /// </summary>
        /// <param name="context">Context of request</param>
        /// <param name="name">Name of the view</param>
        /// <param name="body">View configuration in config.xml format</param>
        /// <param name="jenkinsCrumb">CSRF protection token (optional)</param>
        /// <returns></returns>
        void PostViewConfig(NancyContext context, string name, string body, string jenkinsCrumb);
    }

    /// <summary>
    /// Abstraction of RemoteAccessService.
    /// </summary>
    public abstract class AbstractRemoteAccessService: RemoteAccessService
    {
        public virtual ComputerSet GetComputer(NancyContext context, int? depth)
        {
            return GetComputer(depth);
        }

        public virtual Hudson GetJenkins(NancyContext context)
        {
            return GetJenkins();
        }

        public virtual FreeStyleProject GetJob(NancyContext context, string name)
        {
            return GetJob(name);
        }

        public virtual string GetJobConfig(NancyContext context, string name)
        {
            return GetJobConfig(name);
        }

        public virtual FreeStyleBuild GetJobLastBuild(NancyContext context, string name)
        {
            return GetJobLastBuild(name);
        }

        public virtual void GetJobProgressiveText(NancyContext context, string name, string number, string start)
        {
            GetJobProgressiveText(name, number, start);
        }

        public virtual Queue GetQueue(NancyContext context)
        {
            return GetQueue();
        }

        public virtual Queue GetQueueItem(NancyContext context, string number)
        {
            return GetQueueItem(number);
        }

        public virtual ListView GetView(NancyContext context, string name)
        {
            return GetView(name);
        }

        public virtual string GetViewConfig(NancyContext context, string name)
        {
            return GetViewConfig(name);
        }

        public virtual void HeadJenkins(NancyContext context)
        {
            HeadJenkins();
        }

        public virtual void PostCreateItem(NancyContext context, string name, string from, string mode, string jenkinsCrumb, string contentType, string body)
        {
            PostCreateItem(name, from, mode, jenkinsCrumb, contentType, body);
        }

        public virtual void PostCreateView(NancyContext context, string name, string jenkinsCrumb, string contentType, string body)
        {
            PostCreateView(name, jenkinsCrumb, contentType, body);
        }

        public virtual void PostJobBuild(NancyContext context, string name, string json, string token, string jenkinsCrumb)
        {
            PostJobBuild(name, json, token, jenkinsCrumb);
        }

        public virtual void PostJobConfig(NancyContext context, string name, string body, string jenkinsCrumb)
        {
            PostJobConfig(name, body, jenkinsCrumb);
        }

        public virtual void PostJobDelete(NancyContext context, string name, string jenkinsCrumb)
        {
            PostJobDelete(name, jenkinsCrumb);
        }

        public virtual void PostJobDisable(NancyContext context, string name, string jenkinsCrumb)
        {
            PostJobDisable(name, jenkinsCrumb);
        }

        public virtual void PostJobEnable(NancyContext context, string name, string jenkinsCrumb)
        {
            PostJobEnable(name, jenkinsCrumb);
        }

        public virtual void PostJobLastBuildStop(NancyContext context, string name, string jenkinsCrumb)
        {
            PostJobLastBuildStop(name, jenkinsCrumb);
        }

        public virtual void PostViewConfig(NancyContext context, string name, string body, string jenkinsCrumb)
        {
            PostViewConfig(name, body, jenkinsCrumb);
        }

        protected abstract ComputerSet GetComputer(int? depth);

        protected abstract Hudson GetJenkins();

        protected abstract FreeStyleProject GetJob(string name);

        protected abstract string GetJobConfig(string name);

        protected abstract FreeStyleBuild GetJobLastBuild(string name);

        protected abstract void GetJobProgressiveText(string name, string number, string start);

        protected abstract Queue GetQueue();

        protected abstract Queue GetQueueItem(string number);

        protected abstract ListView GetView(string name);

        protected abstract string GetViewConfig(string name);

        protected abstract void HeadJenkins();

        protected abstract void PostCreateItem(string name, string from, string mode, string jenkinsCrumb, string contentType, string body);

        protected abstract void PostCreateView(string name, string jenkinsCrumb, string contentType, string body);

        protected abstract void PostJobBuild(string name, string json, string token, string jenkinsCrumb);

        protected abstract void PostJobConfig(string name, string body, string jenkinsCrumb);

        protected abstract void PostJobDelete(string name, string jenkinsCrumb);

        protected abstract void PostJobDisable(string name, string jenkinsCrumb);

        protected abstract void PostJobEnable(string name, string jenkinsCrumb);

        protected abstract void PostJobLastBuildStop(string name, string jenkinsCrumb);

        protected abstract void PostViewConfig(string name, string body, string jenkinsCrumb);
    }

}
