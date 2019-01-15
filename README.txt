***********
* README: *
***********

INTRODUCTION:
------------
The purpose of this module is to 'pre-check' that an email
domain is valid based on a mail exchange records.
It does this by adding an element validation
check utilizing the `getmxrr()` functionality in PHP.

Optionally, entities are created for failed validation calls
and a corresponding report (view) is available.

Once the module is enabled validation
can be utilized through the Drupal interface in two ways:
 1. Managing fields of the 'email' type for content types (An
    MXR validate section with a checkbox will be available)
 2. Adding or editing an email type component to a webform
    (A Mail Exchange Record Check checkbox will be visible
    in the validation section)

The element validate function can also be added in code
using the form API '#element_validate' control.

REQUIREMENTS
------------

This module requires the following modules:

 * Views (https://www.drupal.org/project/views)
 * Variable (https://www.drupal.org/project/variable)
 * Field (https://www.drupal.org/project/field)
 * Entity (https://www.drupal.org/project/entity)

 RECOMMENDED MODULES
 -------------------

 * Webform (https://www.drupal.org/project/webform)
    When enabled webform components of email type
    will have the option to use this module.
 * I18n_variable (https://www.drupal.org/project/i18n_localized_variables)
    When enabled the error message can be set
    as multilingual.

USE CASE:
-------------

 * A user completes a subscription form that contains an
   email element using the email 'averagehuman@homtail.com'
 * The user likely intended to enter
   'averagehuman@hotmail.com'
 * Notice 'homtail.com' vs. 'hotmail.com'
 * The email would pass out of the box validation
   for email patterns
 * The email address will fail the mail exchange record
   check contained in this module
 * This typo would have cost resources down the line when
   the user did not receive their email

INSTALLATION:
-------------

* Install as you would normally install a contributed Drupal module. Visit:
   https://www.drupal.org/documentation/install/modules-themes/modules-7
   for further information.

CONFIGURATION
-------------

* Configure user permissions in Administration » People » Permissions:

   - Access Email Domain MXR Validation Failure Report

     Users in roles with this permission will be able to view the
     Email Domain MXR Validate Failures view.
      
   - Administer The Email Domain MXR Validation

     Users in roles with this permission will be able to add
     this modules validation to entity fields and webform components
     that are of email type.
      
   - Administer The Email Domain MXR Configuration Page

     Users in roles with this permission will be able to access
     and modify the configuration page at:
     admin » config » development » email domain mxr validate
      

* Optionally, if you have the i18n_variable module enabled
   you can enable translation for the configurable error
   message. The multilingual variable must be enabled at:

      admin » config » regional » i18n » variable

   by selecting the Email Domain MXR Validation group and
   clicking the checkbox to enable multi-language for the
   Email Domain MXR Validate Error Message variable.

Features:
---------

  * Validation of email domain against mail exchange
     records (dns check)
  * Webform components of email type will have a
     checkbox for this validation
  * Entity fields of type email will have access to
     this validation
  * Cache proven domains to save processing overhead
  * Configurable error message
  * Allowed domains can be manually added and will
     persist through cache flushes
  * Optional features:
    * Entities saved to keep a record of failed
      validation attempts
    * View of failed validation entities (with configurable path)
    * Translatable error message

Author:
-------
Parker Brown
pbrown@acromedia.com