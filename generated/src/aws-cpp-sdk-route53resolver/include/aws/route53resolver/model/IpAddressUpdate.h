﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Route53Resolver
{
namespace Model
{

  /**
   * <p>In an <a
   * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_UpdateResolverEndpoint.html">UpdateResolverEndpoint</a>
   * request, information about an IP address to update.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/IpAddressUpdate">AWS
   * API Reference</a></p>
   */
  class IpAddressUpdate
  {
  public:
    AWS_ROUTE53RESOLVER_API IpAddressUpdate();
    AWS_ROUTE53RESOLVER_API IpAddressUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RESOLVER_API IpAddressUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RESOLVER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> <i>Only when removing an IP address from a Resolver endpoint</i>: The ID of
     * the IP address that you want to remove. To get this ID, use <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_GetResolverEndpoint.html">GetResolverEndpoint</a>.</p>
     */
    inline const Aws::String& GetIpId() const{ return m_ipId; }

    /**
     * <p> <i>Only when removing an IP address from a Resolver endpoint</i>: The ID of
     * the IP address that you want to remove. To get this ID, use <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_GetResolverEndpoint.html">GetResolverEndpoint</a>.</p>
     */
    inline bool IpIdHasBeenSet() const { return m_ipIdHasBeenSet; }

    /**
     * <p> <i>Only when removing an IP address from a Resolver endpoint</i>: The ID of
     * the IP address that you want to remove. To get this ID, use <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_GetResolverEndpoint.html">GetResolverEndpoint</a>.</p>
     */
    inline void SetIpId(const Aws::String& value) { m_ipIdHasBeenSet = true; m_ipId = value; }

    /**
     * <p> <i>Only when removing an IP address from a Resolver endpoint</i>: The ID of
     * the IP address that you want to remove. To get this ID, use <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_GetResolverEndpoint.html">GetResolverEndpoint</a>.</p>
     */
    inline void SetIpId(Aws::String&& value) { m_ipIdHasBeenSet = true; m_ipId = std::move(value); }

    /**
     * <p> <i>Only when removing an IP address from a Resolver endpoint</i>: The ID of
     * the IP address that you want to remove. To get this ID, use <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_GetResolverEndpoint.html">GetResolverEndpoint</a>.</p>
     */
    inline void SetIpId(const char* value) { m_ipIdHasBeenSet = true; m_ipId.assign(value); }

    /**
     * <p> <i>Only when removing an IP address from a Resolver endpoint</i>: The ID of
     * the IP address that you want to remove. To get this ID, use <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_GetResolverEndpoint.html">GetResolverEndpoint</a>.</p>
     */
    inline IpAddressUpdate& WithIpId(const Aws::String& value) { SetIpId(value); return *this;}

    /**
     * <p> <i>Only when removing an IP address from a Resolver endpoint</i>: The ID of
     * the IP address that you want to remove. To get this ID, use <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_GetResolverEndpoint.html">GetResolverEndpoint</a>.</p>
     */
    inline IpAddressUpdate& WithIpId(Aws::String&& value) { SetIpId(std::move(value)); return *this;}

    /**
     * <p> <i>Only when removing an IP address from a Resolver endpoint</i>: The ID of
     * the IP address that you want to remove. To get this ID, use <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_GetResolverEndpoint.html">GetResolverEndpoint</a>.</p>
     */
    inline IpAddressUpdate& WithIpId(const char* value) { SetIpId(value); return *this;}


    /**
     * <p>The ID of the subnet that includes the IP address that you want to update. To
     * get this ID, use <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_GetResolverEndpoint.html">GetResolverEndpoint</a>.</p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }

    /**
     * <p>The ID of the subnet that includes the IP address that you want to update. To
     * get this ID, use <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_GetResolverEndpoint.html">GetResolverEndpoint</a>.</p>
     */
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }

    /**
     * <p>The ID of the subnet that includes the IP address that you want to update. To
     * get this ID, use <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_GetResolverEndpoint.html">GetResolverEndpoint</a>.</p>
     */
    inline void SetSubnetId(const Aws::String& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }

    /**
     * <p>The ID of the subnet that includes the IP address that you want to update. To
     * get this ID, use <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_GetResolverEndpoint.html">GetResolverEndpoint</a>.</p>
     */
    inline void SetSubnetId(Aws::String&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::move(value); }

    /**
     * <p>The ID of the subnet that includes the IP address that you want to update. To
     * get this ID, use <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_GetResolverEndpoint.html">GetResolverEndpoint</a>.</p>
     */
    inline void SetSubnetId(const char* value) { m_subnetIdHasBeenSet = true; m_subnetId.assign(value); }

    /**
     * <p>The ID of the subnet that includes the IP address that you want to update. To
     * get this ID, use <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_GetResolverEndpoint.html">GetResolverEndpoint</a>.</p>
     */
    inline IpAddressUpdate& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}

    /**
     * <p>The ID of the subnet that includes the IP address that you want to update. To
     * get this ID, use <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_GetResolverEndpoint.html">GetResolverEndpoint</a>.</p>
     */
    inline IpAddressUpdate& WithSubnetId(Aws::String&& value) { SetSubnetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the subnet that includes the IP address that you want to update. To
     * get this ID, use <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_GetResolverEndpoint.html">GetResolverEndpoint</a>.</p>
     */
    inline IpAddressUpdate& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}


    /**
     * <p>The new IP address.</p>
     */
    inline const Aws::String& GetIp() const{ return m_ip; }

    /**
     * <p>The new IP address.</p>
     */
    inline bool IpHasBeenSet() const { return m_ipHasBeenSet; }

    /**
     * <p>The new IP address.</p>
     */
    inline void SetIp(const Aws::String& value) { m_ipHasBeenSet = true; m_ip = value; }

    /**
     * <p>The new IP address.</p>
     */
    inline void SetIp(Aws::String&& value) { m_ipHasBeenSet = true; m_ip = std::move(value); }

    /**
     * <p>The new IP address.</p>
     */
    inline void SetIp(const char* value) { m_ipHasBeenSet = true; m_ip.assign(value); }

    /**
     * <p>The new IP address.</p>
     */
    inline IpAddressUpdate& WithIp(const Aws::String& value) { SetIp(value); return *this;}

    /**
     * <p>The new IP address.</p>
     */
    inline IpAddressUpdate& WithIp(Aws::String&& value) { SetIp(std::move(value)); return *this;}

    /**
     * <p>The new IP address.</p>
     */
    inline IpAddressUpdate& WithIp(const char* value) { SetIp(value); return *this;}

  private:

    Aws::String m_ipId;
    bool m_ipIdHasBeenSet = false;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet = false;

    Aws::String m_ip;
    bool m_ipHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
