/*
 * Copyright (c) 2014, 2017-2018, The Linux Foundation. All rights reserved.
 * Permission to use, copy, modify, and/or distribute this software for
 * any purpose with or without fee is hereby granted, provided that the
 * above copyright notice and this permission notice appear in all copies.
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT
 * OF OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */


#include "sw.h"
#include "sw_ioctl.h"
#include "fal_reg_access.h"
#include "fal_uk_if.h"

sw_error_t
fal_phy_get(a_uint32_t dev_id, a_uint32_t phy_addr,
            a_uint32_t reg, a_uint16_t * value)
{
    sw_error_t rv;

    rv = sw_uk_exec(SW_API_PHY_GET, dev_id, phy_addr, reg, value);
    return rv;
}

sw_error_t
fal_phy_set(a_uint32_t dev_id, a_uint32_t phy_addr,
            a_uint32_t reg, a_uint16_t value)
{
    sw_error_t rv;

    rv = sw_uk_exec(SW_API_PHY_SET, dev_id, phy_addr, reg, value);
    return rv;
}
