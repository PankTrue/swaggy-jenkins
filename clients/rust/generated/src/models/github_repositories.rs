/* 
 * Swaggy Jenkins
 *
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 1.0.0
 * Contact: blah@cliffano.com
 * Generated by: https://openapi-generator.tech
 */


#[allow(unused_imports)]
use serde_json::Value;

#[derive(Debug, Serialize, Deserialize)]
pub struct GithubRepositories {
  #[serde(rename = "_class")]
  _class: Option<String>,
  #[serde(rename = "_links")]
  _links: Option<::models::GithubRepositorieslinks>,
  #[serde(rename = "items")]
  items: Option<Vec<::models::GithubRepository>>,
  #[serde(rename = "lastPage")]
  last_page: Option<i32>,
  #[serde(rename = "nextPage")]
  next_page: Option<i32>,
  #[serde(rename = "pageSize")]
  page_size: Option<i32>
}

impl GithubRepositories {
  pub fn new() -> GithubRepositories {
    GithubRepositories {
      _class: None,
      _links: None,
      items: None,
      last_page: None,
      next_page: None,
      page_size: None
    }
  }

  pub fn set__class(&mut self, _class: String) {
    self._class = Some(_class);
  }

  pub fn with__class(mut self, _class: String) -> GithubRepositories {
    self._class = Some(_class);
    self
  }

  pub fn _class(&self) -> Option<&String> {
    self._class.as_ref()
  }

  pub fn reset__class(&mut self) {
    self._class = None;
  }

  pub fn set__links(&mut self, _links: ::models::GithubRepositorieslinks) {
    self._links = Some(_links);
  }

  pub fn with__links(mut self, _links: ::models::GithubRepositorieslinks) -> GithubRepositories {
    self._links = Some(_links);
    self
  }

  pub fn _links(&self) -> Option<&::models::GithubRepositorieslinks> {
    self._links.as_ref()
  }

  pub fn reset__links(&mut self) {
    self._links = None;
  }

  pub fn set_items(&mut self, items: Vec<::models::GithubRepository>) {
    self.items = Some(items);
  }

  pub fn with_items(mut self, items: Vec<::models::GithubRepository>) -> GithubRepositories {
    self.items = Some(items);
    self
  }

  pub fn items(&self) -> Option<&Vec<::models::GithubRepository>> {
    self.items.as_ref()
  }

  pub fn reset_items(&mut self) {
    self.items = None;
  }

  pub fn set_last_page(&mut self, last_page: i32) {
    self.last_page = Some(last_page);
  }

  pub fn with_last_page(mut self, last_page: i32) -> GithubRepositories {
    self.last_page = Some(last_page);
    self
  }

  pub fn last_page(&self) -> Option<&i32> {
    self.last_page.as_ref()
  }

  pub fn reset_last_page(&mut self) {
    self.last_page = None;
  }

  pub fn set_next_page(&mut self, next_page: i32) {
    self.next_page = Some(next_page);
  }

  pub fn with_next_page(mut self, next_page: i32) -> GithubRepositories {
    self.next_page = Some(next_page);
    self
  }

  pub fn next_page(&self) -> Option<&i32> {
    self.next_page.as_ref()
  }

  pub fn reset_next_page(&mut self) {
    self.next_page = None;
  }

  pub fn set_page_size(&mut self, page_size: i32) {
    self.page_size = Some(page_size);
  }

  pub fn with_page_size(mut self, page_size: i32) -> GithubRepositories {
    self.page_size = Some(page_size);
    self
  }

  pub fn page_size(&self) -> Option<&i32> {
    self.page_size.as_ref()
  }

  pub fn reset_page_size(&mut self) {
    self.page_size = None;
  }

}


