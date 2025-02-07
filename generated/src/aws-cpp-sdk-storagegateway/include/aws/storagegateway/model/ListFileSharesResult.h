﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/storagegateway/model/FileShareInfo.h>
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
namespace StorageGateway
{
namespace Model
{
  /**
   * <p>ListFileShareOutput</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/ListFileSharesOutput">AWS
   * API Reference</a></p>
   */
  class ListFileSharesResult
  {
  public:
    AWS_STORAGEGATEWAY_API ListFileSharesResult();
    AWS_STORAGEGATEWAY_API ListFileSharesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_STORAGEGATEWAY_API ListFileSharesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>If the request includes <code>Marker</code>, the response returns that value
     * in this field.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>If the request includes <code>Marker</code>, the response returns that value
     * in this field.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p>If the request includes <code>Marker</code>, the response returns that value
     * in this field.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }

    /**
     * <p>If the request includes <code>Marker</code>, the response returns that value
     * in this field.</p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p>If the request includes <code>Marker</code>, the response returns that value
     * in this field.</p>
     */
    inline ListFileSharesResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>If the request includes <code>Marker</code>, the response returns that value
     * in this field.</p>
     */
    inline ListFileSharesResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>If the request includes <code>Marker</code>, the response returns that value
     * in this field.</p>
     */
    inline ListFileSharesResult& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>If a value is present, there are more file shares to return. In a subsequent
     * request, use <code>NextMarker</code> as the value for <code>Marker</code> to
     * retrieve the next set of file shares.</p>
     */
    inline const Aws::String& GetNextMarker() const{ return m_nextMarker; }

    /**
     * <p>If a value is present, there are more file shares to return. In a subsequent
     * request, use <code>NextMarker</code> as the value for <code>Marker</code> to
     * retrieve the next set of file shares.</p>
     */
    inline void SetNextMarker(const Aws::String& value) { m_nextMarker = value; }

    /**
     * <p>If a value is present, there are more file shares to return. In a subsequent
     * request, use <code>NextMarker</code> as the value for <code>Marker</code> to
     * retrieve the next set of file shares.</p>
     */
    inline void SetNextMarker(Aws::String&& value) { m_nextMarker = std::move(value); }

    /**
     * <p>If a value is present, there are more file shares to return. In a subsequent
     * request, use <code>NextMarker</code> as the value for <code>Marker</code> to
     * retrieve the next set of file shares.</p>
     */
    inline void SetNextMarker(const char* value) { m_nextMarker.assign(value); }

    /**
     * <p>If a value is present, there are more file shares to return. In a subsequent
     * request, use <code>NextMarker</code> as the value for <code>Marker</code> to
     * retrieve the next set of file shares.</p>
     */
    inline ListFileSharesResult& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}

    /**
     * <p>If a value is present, there are more file shares to return. In a subsequent
     * request, use <code>NextMarker</code> as the value for <code>Marker</code> to
     * retrieve the next set of file shares.</p>
     */
    inline ListFileSharesResult& WithNextMarker(Aws::String&& value) { SetNextMarker(std::move(value)); return *this;}

    /**
     * <p>If a value is present, there are more file shares to return. In a subsequent
     * request, use <code>NextMarker</code> as the value for <code>Marker</code> to
     * retrieve the next set of file shares.</p>
     */
    inline ListFileSharesResult& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}


    /**
     * <p>An array of information about the S3 File Gateway's file shares.</p>
     */
    inline const Aws::Vector<FileShareInfo>& GetFileShareInfoList() const{ return m_fileShareInfoList; }

    /**
     * <p>An array of information about the S3 File Gateway's file shares.</p>
     */
    inline void SetFileShareInfoList(const Aws::Vector<FileShareInfo>& value) { m_fileShareInfoList = value; }

    /**
     * <p>An array of information about the S3 File Gateway's file shares.</p>
     */
    inline void SetFileShareInfoList(Aws::Vector<FileShareInfo>&& value) { m_fileShareInfoList = std::move(value); }

    /**
     * <p>An array of information about the S3 File Gateway's file shares.</p>
     */
    inline ListFileSharesResult& WithFileShareInfoList(const Aws::Vector<FileShareInfo>& value) { SetFileShareInfoList(value); return *this;}

    /**
     * <p>An array of information about the S3 File Gateway's file shares.</p>
     */
    inline ListFileSharesResult& WithFileShareInfoList(Aws::Vector<FileShareInfo>&& value) { SetFileShareInfoList(std::move(value)); return *this;}

    /**
     * <p>An array of information about the S3 File Gateway's file shares.</p>
     */
    inline ListFileSharesResult& AddFileShareInfoList(const FileShareInfo& value) { m_fileShareInfoList.push_back(value); return *this; }

    /**
     * <p>An array of information about the S3 File Gateway's file shares.</p>
     */
    inline ListFileSharesResult& AddFileShareInfoList(FileShareInfo&& value) { m_fileShareInfoList.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_marker;

    Aws::String m_nextMarker;

    Aws::Vector<FileShareInfo> m_fileShareInfoList;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
