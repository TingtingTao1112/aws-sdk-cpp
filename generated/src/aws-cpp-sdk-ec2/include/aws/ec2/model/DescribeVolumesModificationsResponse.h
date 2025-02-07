﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/VolumeModification.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{
  class DescribeVolumesModificationsResponse
  {
  public:
    AWS_EC2_API DescribeVolumesModificationsResponse();
    AWS_EC2_API DescribeVolumesModificationsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeVolumesModificationsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the volume modifications.</p>
     */
    inline const Aws::Vector<VolumeModification>& GetVolumesModifications() const{ return m_volumesModifications; }

    /**
     * <p>Information about the volume modifications.</p>
     */
    inline void SetVolumesModifications(const Aws::Vector<VolumeModification>& value) { m_volumesModifications = value; }

    /**
     * <p>Information about the volume modifications.</p>
     */
    inline void SetVolumesModifications(Aws::Vector<VolumeModification>&& value) { m_volumesModifications = std::move(value); }

    /**
     * <p>Information about the volume modifications.</p>
     */
    inline DescribeVolumesModificationsResponse& WithVolumesModifications(const Aws::Vector<VolumeModification>& value) { SetVolumesModifications(value); return *this;}

    /**
     * <p>Information about the volume modifications.</p>
     */
    inline DescribeVolumesModificationsResponse& WithVolumesModifications(Aws::Vector<VolumeModification>&& value) { SetVolumesModifications(std::move(value)); return *this;}

    /**
     * <p>Information about the volume modifications.</p>
     */
    inline DescribeVolumesModificationsResponse& AddVolumesModifications(const VolumeModification& value) { m_volumesModifications.push_back(value); return *this; }

    /**
     * <p>Information about the volume modifications.</p>
     */
    inline DescribeVolumesModificationsResponse& AddVolumesModifications(VolumeModification&& value) { m_volumesModifications.push_back(std::move(value)); return *this; }


    /**
     * <p>Token for pagination, null if there are no more results </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Token for pagination, null if there are no more results </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Token for pagination, null if there are no more results </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Token for pagination, null if there are no more results </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Token for pagination, null if there are no more results </p>
     */
    inline DescribeVolumesModificationsResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Token for pagination, null if there are no more results </p>
     */
    inline DescribeVolumesModificationsResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Token for pagination, null if there are no more results </p>
     */
    inline DescribeVolumesModificationsResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeVolumesModificationsResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeVolumesModificationsResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<VolumeModification> m_volumesModifications;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
