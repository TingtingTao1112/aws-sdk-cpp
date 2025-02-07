﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/privatenetworks/model/DeactivateDeviceIdentifierResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::PrivateNetworks::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DeactivateDeviceIdentifierResult::DeactivateDeviceIdentifierResult()
{
}

DeactivateDeviceIdentifierResult::DeactivateDeviceIdentifierResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DeactivateDeviceIdentifierResult& DeactivateDeviceIdentifierResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("deviceIdentifier"))
  {
    m_deviceIdentifier = jsonValue.GetObject("deviceIdentifier");

  }



  return *this;
}
