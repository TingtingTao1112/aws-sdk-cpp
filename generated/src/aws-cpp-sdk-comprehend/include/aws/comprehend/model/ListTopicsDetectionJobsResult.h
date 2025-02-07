﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/comprehend/model/TopicsDetectionJobProperties.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Comprehend
{
namespace Model
{
  class ListTopicsDetectionJobsResult
  {
  public:
    AWS_COMPREHEND_API ListTopicsDetectionJobsResult();
    AWS_COMPREHEND_API ListTopicsDetectionJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHEND_API ListTopicsDetectionJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list containing the properties of each job that is returned.</p>
     */
    inline const Aws::Vector<TopicsDetectionJobProperties>& GetTopicsDetectionJobPropertiesList() const{ return m_topicsDetectionJobPropertiesList; }

    /**
     * <p>A list containing the properties of each job that is returned.</p>
     */
    inline void SetTopicsDetectionJobPropertiesList(const Aws::Vector<TopicsDetectionJobProperties>& value) { m_topicsDetectionJobPropertiesList = value; }

    /**
     * <p>A list containing the properties of each job that is returned.</p>
     */
    inline void SetTopicsDetectionJobPropertiesList(Aws::Vector<TopicsDetectionJobProperties>&& value) { m_topicsDetectionJobPropertiesList = std::move(value); }

    /**
     * <p>A list containing the properties of each job that is returned.</p>
     */
    inline ListTopicsDetectionJobsResult& WithTopicsDetectionJobPropertiesList(const Aws::Vector<TopicsDetectionJobProperties>& value) { SetTopicsDetectionJobPropertiesList(value); return *this;}

    /**
     * <p>A list containing the properties of each job that is returned.</p>
     */
    inline ListTopicsDetectionJobsResult& WithTopicsDetectionJobPropertiesList(Aws::Vector<TopicsDetectionJobProperties>&& value) { SetTopicsDetectionJobPropertiesList(std::move(value)); return *this;}

    /**
     * <p>A list containing the properties of each job that is returned.</p>
     */
    inline ListTopicsDetectionJobsResult& AddTopicsDetectionJobPropertiesList(const TopicsDetectionJobProperties& value) { m_topicsDetectionJobPropertiesList.push_back(value); return *this; }

    /**
     * <p>A list containing the properties of each job that is returned.</p>
     */
    inline ListTopicsDetectionJobsResult& AddTopicsDetectionJobPropertiesList(TopicsDetectionJobProperties&& value) { m_topicsDetectionJobPropertiesList.push_back(std::move(value)); return *this; }


    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline ListTopicsDetectionJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline ListTopicsDetectionJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline ListTopicsDetectionJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<TopicsDetectionJobProperties> m_topicsDetectionJobPropertiesList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
