﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/model/Service.h>
#include <aws/ecs/model/Failure.h>
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
namespace ECS
{
namespace Model
{
  class DescribeServicesResult
  {
  public:
    AWS_ECS_API DescribeServicesResult();
    AWS_ECS_API DescribeServicesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECS_API DescribeServicesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of services described.</p>
     */
    inline const Aws::Vector<Service>& GetServices() const{ return m_services; }

    /**
     * <p>The list of services described.</p>
     */
    inline void SetServices(const Aws::Vector<Service>& value) { m_services = value; }

    /**
     * <p>The list of services described.</p>
     */
    inline void SetServices(Aws::Vector<Service>&& value) { m_services = std::move(value); }

    /**
     * <p>The list of services described.</p>
     */
    inline DescribeServicesResult& WithServices(const Aws::Vector<Service>& value) { SetServices(value); return *this;}

    /**
     * <p>The list of services described.</p>
     */
    inline DescribeServicesResult& WithServices(Aws::Vector<Service>&& value) { SetServices(std::move(value)); return *this;}

    /**
     * <p>The list of services described.</p>
     */
    inline DescribeServicesResult& AddServices(const Service& value) { m_services.push_back(value); return *this; }

    /**
     * <p>The list of services described.</p>
     */
    inline DescribeServicesResult& AddServices(Service&& value) { m_services.push_back(std::move(value)); return *this; }


    /**
     * <p>Any failures associated with the call.</p>
     */
    inline const Aws::Vector<Failure>& GetFailures() const{ return m_failures; }

    /**
     * <p>Any failures associated with the call.</p>
     */
    inline void SetFailures(const Aws::Vector<Failure>& value) { m_failures = value; }

    /**
     * <p>Any failures associated with the call.</p>
     */
    inline void SetFailures(Aws::Vector<Failure>&& value) { m_failures = std::move(value); }

    /**
     * <p>Any failures associated with the call.</p>
     */
    inline DescribeServicesResult& WithFailures(const Aws::Vector<Failure>& value) { SetFailures(value); return *this;}

    /**
     * <p>Any failures associated with the call.</p>
     */
    inline DescribeServicesResult& WithFailures(Aws::Vector<Failure>&& value) { SetFailures(std::move(value)); return *this;}

    /**
     * <p>Any failures associated with the call.</p>
     */
    inline DescribeServicesResult& AddFailures(const Failure& value) { m_failures.push_back(value); return *this; }

    /**
     * <p>Any failures associated with the call.</p>
     */
    inline DescribeServicesResult& AddFailures(Failure&& value) { m_failures.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Service> m_services;

    Aws::Vector<Failure> m_failures;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
