/******BEGIN LICENSE BLOCK*******
*
* Common Public Attribution License Version 1.0.
*
* The contents of this file are subject to the Common Public Attribution
* License Version 1.0 (the "License") you may not use this file except in
* compliance with the License. You may obtain a copy of the License at
* http://developers.facebook.com/fbopen/cpal.html. The License is based
* on the Mozilla Public License Version 1.1 but Sections 14 and 15 have
* been added to cover use of software over a computer network and provide
* for limited attribution for the Original Developer. In addition, Exhibit A
* has been modified to be consistent with Exhibit B.
* Software distributed under the License is distributed on an "AS IS" basis,
* WITHOUT WARRANTY OF ANY KIND, either express or implied. See the License
* for the specific language governing rights and limitations under the License.
* The Original Code is Facebook Open Platform.
* The Original Developer is the Initial Developer.
* The Initial Developer of the Original Code is Facebook, Inc.  All portions
* of the code written by Facebook, Inc are
* Copyright 2006-2008 Facebook, Inc. All Rights Reserved.
*
*
********END LICENSE BLOCK*********/

#ifndef __FBML_BASE_H__
#define __FBML_BASE_H__

#include <assert.h>
#include <string>
#include <nsString.h>

#ifdef PRODUCTION
#define ASSERT(x) {if(x){}}
#else
#define ASSERT(x) assert(x)
#endif

/**
 * Checking memory allocation function's return to throw a std::bad_alloc when
 * NULL is returned.
 */
void *m(void *);
char *m(char *);
const char *m(const char *);

void UTF16ToStdString(std::string &out, const nsString &s);
void UTF16ToUTF8String(std::string &out, const nsString &s);

#endif // __FBML_BASE_H__