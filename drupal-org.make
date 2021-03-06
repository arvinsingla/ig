api = 2
core = 7.x

projects[context][version] = "3.6"
projects[context][type] = "module"
projects[context][subdir] = "contrib"

projects[ctools][version] = "1.7"
projects[ctools][type] = "module"
projects[ctools][subdir] = "contrib"

projects[date][version] = "2.8"
projects[date][type] = "module"
projects[date][subdir] = "contrib"

projects[devel][version] = "1.5"
projects[devel][type] = "module"
projects[devel][subdir] = "contrib"

projects[diff][version] = "3.2"
projects[diff][type] = "module"
projects[diff][subdir] = "contrib"

projects[elements][version] = "1.4"
projects[elements][type] = "module"
projects[elements][subdir] = "contrib"

projects[entity][version] = "1.6"
projects[entity][type] = "module"
projects[entity][subdir] = "contrib"

projects[entityreference][version] = "1.1"
projects[entityreference][type] = "module"
projects[entityreference][subdir] = "contrib"

projects[features][version] = "2.6"
projects[features][type] = "module"
projects[features][subdir] = "contrib"

projects[field_formatter_settings][version] = "1.1"
projects[field_formatter_settings][type] = "module"
projects[field_formatter_settings][subdir] = "contrib"

projects[field_permissions][version] = "1.0-beta2"
projects[field_permissions][type] = "module"
projects[field_permissions][subdir] = "contrib"

projects[instagram][subdir] = "contrib"
projects[instagram][download][type] = "git"
projects[instagram][download][url] = "https://github.com/arvinsingla/instagram-drupal.git"
projects[instagram][download][branch] = "master"

projects[jquery_update][version] = "3.0-alpha2"
projects[jquery_update][type] = "module"
projects[jquery_update][subdir] = "contrib"

projects[libraries][version] = "2.2"
projects[libraries][type] = "module"
projects[libraries][subdir] = "contrib"

projects[maillog][version] = "1.0-alpha1"
projects[maillog][type] = "module"
projects[maillog][subdir] = "contrib"

projects[node_view_permissions][version] = "1.5"
projects[node_view_permissions][type] = "module"
projects[node_view_permissions][subdir] = "contrib"

projects[rules][version] = "2.7"
projects[rules][type] = "module"
projects[rules][subdir] = "contrib"

projects[stripe][subdir] = "contrib"
projects[stripe][download][type] = "git"
projects[stripe][download][url] = "https://github.com/arvinsingla/stripe.git"
projects[stripe][download][branch] = "arvin"

projects[strongarm][version] = "2.0"
projects[strongarm][type] = "module"
projects[strongarm][subdir] = "contrib"

projects[views][version] = "3.11"
projects[views][type] = "module"
projects[views][subdir] = "contrib"

projects[views_bootstrap][type] = "module"
projects[views_bootstrap][subdir] = "contrib"
projects[views_bootstrap][download][type] = "git"
projects[views_bootstrap][download][url] = "http://git.drupal.org/project/views_bootstrap.git"
projects[views_bootstrap][download][revision] = "8025e821a0450a7535cf7257870efe9a37a5713d"
projects[views_bootstrap][patch][] = "https://www.drupal.org/files/issues/views_bootstrap-thumbails-columns-per-device-size-2203111-54.patch"

projects[views_datasource][version] = "1.0-alpha2"
projects[views_datasource][type] = "module"
projects[views_datasource][subdir] = "contrib"

; Libraries

libraries[stripe][download][type] = "file"
libraries[stripe][download][url] = "https://github.com/stripe/stripe-php/archive/v2.1.1.zip"

libraries[bootstrap][download][type] = "file"
libraries[bootstrap][download][url] = "https://github.com/twbs/bootstrap/archive/v3.3.5.zip"
libraries[bootstrap][destination] = "themes/custom/ig_theme"

libraries[angular][download][type] = "file"
libraries[angular][download][url] = "http://code.angularjs.org/1.4.3/angular-1.4.3.zip"

; Themes

projects[bootstrap][version] = "3.0"
projects[bootstrap][type] = "theme"
projects[bootstrap][subdir] = "contrib"

