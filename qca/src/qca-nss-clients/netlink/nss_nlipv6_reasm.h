/*
 **************************************************************************
 * Copyright (c) 2020, The Linux Foundation. All rights reserved.
 *
 * Permission to use, copy, modify, and/or distribute this software for
 * any purpose with or without fee is hereby granted, provided that the
 * above copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT
 * OF OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 **************************************************************************
 */

/*
 * nss_nlipv6_reasm.h
 *	NSS Netlink ipv6_reasm API definitions
 */
#ifndef __NSS_NLIPV6_REASM_H
#define __NSS_NLIPV6_REASM_H

bool nss_nlipv6_reasm_init(void);
bool nss_nlipv6_reasm_exit(void);

#if defined(CONFIG_NSS_NLIPV6_REASM)
#define NSS_NLIPV6_REASM_INIT nss_nlipv6_reasm_init
#define NSS_NLIPV6_REASM_EXIT nss_nlipv6_reasm_exit
#else
#define NSS_NLIPV6_REASM_INIT 0
#define NSS_NLIPV6_REASM_EXIT 0
#endif /* !CONFIG_NSS_NLIPV6_REASM */

#endif /* __NSS_NLIPV6_REASM_H */
