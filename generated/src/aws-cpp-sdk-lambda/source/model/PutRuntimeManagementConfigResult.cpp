﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lambda/model/PutRuntimeManagementConfigResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Lambda::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

PutRuntimeManagementConfigResult::PutRuntimeManagementConfigResult() : 
    m_updateRuntimeOn(UpdateRuntimeOn::NOT_SET)
{
}

PutRuntimeManagementConfigResult::PutRuntimeManagementConfigResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_updateRuntimeOn(UpdateRuntimeOn::NOT_SET)
{
  *this = result;
}

PutRuntimeManagementConfigResult& PutRuntimeManagementConfigResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("UpdateRuntimeOn"))
  {
    m_updateRuntimeOn = UpdateRuntimeOnMapper::GetUpdateRuntimeOnForName(jsonValue.GetString("UpdateRuntimeOn"));

  }

  if(jsonValue.ValueExists("FunctionArn"))
  {
    m_functionArn = jsonValue.GetString("FunctionArn");

  }

  if(jsonValue.ValueExists("RuntimeVersionArn"))
  {
    m_runtimeVersionArn = jsonValue.GetString("RuntimeVersionArn");

  }



  return *this;
}
