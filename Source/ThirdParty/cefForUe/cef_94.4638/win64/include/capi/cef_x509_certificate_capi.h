// Copyright (c) 2021 Marshall A. Greenblatt. All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are
// met:
//
//    * Redistributions of source code must retain the above copyright
// notice, this list of conditions and the following disclaimer.
//    * Redistributions in binary form must reproduce the above
// copyright notice, this list of conditions and the following disclaimer
// in the documentation and/or other materials provided with the
// distribution.
//    * Neither the name of Google Inc. nor the name Chromium Embedded
// Framework nor the names of its contributors may be used to endorse
// or promote products derived from this software without specific prior
// written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
// "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
// OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
// LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool and should not edited
// by hand. See the translator.README.txt file in the tools directory for
// more information.
//
// $hash=e06ad8a1e173edd1e888ce6a8f8a9d95394e6a44$
//

#ifndef CEF_INCLUDE_CAPI_CEF_X509_CERTIFICATE_CAPI_H_
#define CEF_INCLUDE_CAPI_CEF_X509_CERTIFICATE_CAPI_H_
#pragma once

#include "include/capi/cef_base_capi.h"
#include "include/capi/cef_values_capi.h"

#ifdef __cplusplus
extern "C" {
#endif

///
// Structure representing the issuer or subject field of an X.509 certificate.
///
typedef struct _cef_x509cert_principal_t {
  ///
  // Base structure.
  ///
  cef_base_ref_counted_t base;

  ///
  // Returns a name that can be used to represent the issuer. It tries in this
  // order: Common Name (CN), Organization Name (O) and Organizational Unit Name
  // (OU) and returns the first non-NULL one found.
  ///
  // The resulting string must be freed by calling cef_string_userfree_free().
  cef_string_userfree_t(CEF_CALLBACK* get_display_name)(
      struct _cef_x509cert_principal_t* self);

  ///
  // Returns the common name.
  ///
  // The resulting string must be freed by calling cef_string_userfree_free().
  cef_string_userfree_t(CEF_CALLBACK* get_common_name)(
      struct _cef_x509cert_principal_t* self);

  ///
  // Returns the locality name.
  ///
  // The resulting string must be freed by calling cef_string_userfree_free().
  cef_string_userfree_t(CEF_CALLBACK* get_locality_name)(
      struct _cef_x509cert_principal_t* self);

  ///
  // Returns the state or province name.
  ///
  // The resulting string must be freed by calling cef_string_userfree_free().
  cef_string_userfree_t(CEF_CALLBACK* get_state_or_province_name)(
      struct _cef_x509cert_principal_t* self);

  ///
  // Returns the country name.
  ///
  // The resulting string must be freed by calling cef_string_userfree_free().
  cef_string_userfree_t(CEF_CALLBACK* get_country_name)(
      struct _cef_x509cert_principal_t* self);

  ///
  // Retrieve the list of street addresses.
  ///
  void(CEF_CALLBACK* get_street_addresses)(
      struct _cef_x509cert_principal_t* self,
      cef_string_list_t addresses);

  ///
  // Retrieve the list of organization names.
  ///
  void(CEF_CALLBACK* get_organization_names)(
      struct _cef_x509cert_principal_t* self,
      cef_string_list_t names);

  ///
  // Retrieve the list of organization unit names.
  ///
  void(CEF_CALLBACK* get_organization_unit_names)(
      struct _cef_x509cert_principal_t* self,
      cef_string_list_t names);

  ///
  // Retrieve the list of domain components.
  ///
  void(CEF_CALLBACK* get_domain_components)(
      struct _cef_x509cert_principal_t* self,
      cef_string_list_t components);
} cef_x509cert_principal_t;

///
// Structure representing a X.509 certificate.
///
typedef struct _cef_x509certificate_t {
  ///
  // Base structure.
  ///
  cef_base_ref_counted_t base;

  ///
  // Returns the subject of the X.509 certificate. For HTTPS server certificates
  // this represents the web server.  The common name of the subject should
  // match the host name of the web server.
  ///
  struct _cef_x509cert_principal_t*(CEF_CALLBACK* get_subject)(
      struct _cef_x509certificate_t* self);

  ///
  // Returns the issuer of the X.509 certificate.
  ///
  struct _cef_x509cert_principal_t*(CEF_CALLBACK* get_issuer)(
      struct _cef_x509certificate_t* self);

  ///
  // Returns the DER encoded serial number for the X.509 certificate. The value
  // possibly includes a leading 00 byte.
  ///
  struct _cef_binary_value_t*(CEF_CALLBACK* get_serial_number)(
      struct _cef_x509certificate_t* self);

  ///
  // Returns the date before which the X.509 certificate is invalid.
  // CefTime.GetTimeT() will return 0 if no date was specified.
  ///
  cef_time_t(CEF_CALLBACK* get_valid_start)(
      struct _cef_x509certificate_t* self);

  ///
  // Returns the date after which the X.509 certificate is invalid.
  // CefTime.GetTimeT() will return 0 if no date was specified.
  ///
  cef_time_t(CEF_CALLBACK* get_valid_expiry)(
      struct _cef_x509certificate_t* self);

  ///
  // Returns the DER encoded data for the X.509 certificate.
  ///
  struct _cef_binary_value_t*(CEF_CALLBACK* get_derencoded)(
      struct _cef_x509certificate_t* self);

  ///
  // Returns the PEM encoded data for the X.509 certificate.
  ///
  struct _cef_binary_value_t*(CEF_CALLBACK* get_pemencoded)(
      struct _cef_x509certificate_t* self);

  ///
  // Returns the number of certificates in the issuer chain. If 0, the
  // certificate is self-signed.
  ///
  size_t(CEF_CALLBACK* get_issuer_chain_size)(
      struct _cef_x509certificate_t* self);

  ///
  // Returns the DER encoded data for the certificate issuer chain. If we failed
  // to encode a certificate in the chain it is still present in the array but
  // is an NULL string.
  ///
  void(CEF_CALLBACK* get_derencoded_issuer_chain)(
      struct _cef_x509certificate_t* self,
      size_t* chainCount,
      struct _cef_binary_value_t** chain);

  ///
  // Returns the PEM encoded data for the certificate issuer chain. If we failed
  // to encode a certificate in the chain it is still present in the array but
  // is an NULL string.
  ///
  void(CEF_CALLBACK* get_pemencoded_issuer_chain)(
      struct _cef_x509certificate_t* self,
      size_t* chainCount,
      struct _cef_binary_value_t** chain);
} cef_x509certificate_t;

#ifdef __cplusplus
}
#endif

#endif  // CEF_INCLUDE_CAPI_CEF_X509_CERTIFICATE_CAPI_H_
