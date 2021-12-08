﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehendmedical/model/DescribeSNOMEDCTInferenceJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ComprehendMedical::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeSNOMEDCTInferenceJobRequest::DescribeSNOMEDCTInferenceJobRequest() : 
    m_jobIdHasBeenSet(false)
{
}

Aws::String DescribeSNOMEDCTInferenceJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_jobIdHasBeenSet)
  {
   payload.WithString("JobId", m_jobId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeSNOMEDCTInferenceJobRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "ComprehendMedical_20181030.DescribeSNOMEDCTInferenceJob"));
  return headers;

}




