/* -*- Mode: C++; tab-width: 2; indent-tabs-mode: nil; c-basic-offset: 2 -*- */
/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef nsgnomeshellservice_h____
#define nsgnomeshellservice_h____

#include "nsShellService.h"
#include "nsString.h"
#include "mozilla/Attributes.h"
#include "nsSuiteCID.h"

struct ProtocolAssociation;

class nsGNOMEShellService final : public nsIShellService
{
public:
  nsGNOMEShellService() : mCheckedThisSessionClient(false) { }

  NS_DECL_ISUPPORTS
  NS_DECL_NSISHELLSERVICE

  nsresult Init();

private:
  ~nsGNOMEShellService() {}
  bool HandlerMatchesAppName(const char* aHandler);

  nsCString mAppPath;
  bool mAppIsInPath;
  bool mUseLocaleFilenames;
  bool mCheckedThisSessionClient;
};

#endif // nsgnomeshellservice_h____

