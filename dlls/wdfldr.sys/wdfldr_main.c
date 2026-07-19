/*
 * Copyright 2026 bluechxin
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA
 */

#include <stdarg.h>
#include <stdlib.h>

#include "ntstatus.h"
#define WIN32_NO_STATUS
#include "windef.h"
#include "winbase.h"
#include "winternl.h"
#include "ddk/wdm.h"
#include "wine/list.h"
#include "wine/debug.h"

WINE_DEFAULT_DEBUG_CHANNEL(wdfldr);

static NTSTATUS WINAPI wdf_stub_0(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[0] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_1(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[1] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_2(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[2] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_3(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[3] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_4(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[4] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_5(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[5] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_6(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[6] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_7(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[7] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_8(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[8] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_9(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[9] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_10(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[10] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_11(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[11] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_12(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[12] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_13(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[13] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_14(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[14] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_15(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[15] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_16(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[16] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_17(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[17] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_18(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[18] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_19(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[19] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_20(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[20] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_21(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[21] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_22(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[22] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_23(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[23] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_24(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[24] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_25(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[25] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_26(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[26] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_27(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[27] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_28(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[28] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_29(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[29] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_30(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[30] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_31(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[31] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_32(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[32] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_33(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[33] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_34(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[34] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_35(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[35] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_36(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[36] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_37(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[37] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_38(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[38] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_39(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[39] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_40(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[40] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_41(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[41] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_42(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[42] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_43(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[43] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_44(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[44] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_45(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[45] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_46(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[46] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_47(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[47] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_48(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[48] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_49(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[49] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_50(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[50] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_51(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[51] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_52(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[52] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_53(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[53] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_54(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[54] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_55(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[55] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_56(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[56] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_57(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[57] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_58(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[58] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_59(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[59] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_60(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[60] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_61(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[61] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_62(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[62] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_63(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[63] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_64(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[64] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_65(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[65] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_66(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[66] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_67(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[67] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_68(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[68] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_69(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[69] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_70(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[70] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_71(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[71] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_72(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[72] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_73(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[73] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_74(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[74] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_75(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[75] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_76(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[76] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_77(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[77] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_78(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[78] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_79(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[79] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_80(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[80] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_81(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[81] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_82(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[82] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_83(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[83] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_84(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[84] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_85(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[85] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_86(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[86] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_87(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[87] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_88(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[88] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_89(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[89] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_90(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[90] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_91(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[91] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_92(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[92] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_93(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[93] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_94(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[94] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_95(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[95] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_96(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[96] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_97(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[97] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_98(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[98] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_99(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[99] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_100(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[100] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_101(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[101] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_102(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[102] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_103(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[103] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_104(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[104] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_105(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[105] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_106(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[106] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_107(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[107] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_108(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[108] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_109(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[109] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_110(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[110] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_111(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[111] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_112(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[112] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_113(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[113] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_114(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[114] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_115(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[115] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_116(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[116] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_117(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[117] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_118(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[118] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_119(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[119] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_120(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[120] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_121(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[121] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_122(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[122] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_123(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[123] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_124(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[124] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_125(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[125] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_126(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[126] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_127(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[127] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_128(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[128] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_129(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[129] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_130(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[130] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_131(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[131] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_132(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[132] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_133(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[133] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_134(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[134] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_135(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[135] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_136(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[136] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_137(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[137] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_138(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[138] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_139(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[139] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_140(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[140] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_141(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[141] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_142(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[142] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_143(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[143] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_144(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[144] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_145(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[145] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_146(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[146] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_147(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[147] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_148(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[148] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_149(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[149] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_150(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[150] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_151(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[151] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_152(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[152] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_153(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[153] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_154(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[154] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_155(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[155] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_156(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[156] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_157(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[157] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_158(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[158] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_159(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[159] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_160(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[160] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_161(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[161] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_162(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[162] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_163(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[163] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_164(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[164] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_165(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[165] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_166(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[166] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_167(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[167] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_168(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[168] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_169(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[169] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_170(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[170] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_171(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[171] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_172(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[172] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_173(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[173] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_174(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[174] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_175(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[175] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_176(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[176] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_177(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[177] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_178(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[178] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_179(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[179] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_180(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[180] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_181(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[181] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_182(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[182] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_183(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[183] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_184(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[184] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_185(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[185] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_186(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[186] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_187(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[187] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_188(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[188] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_189(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[189] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_190(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[190] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_191(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[191] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_192(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[192] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_193(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[193] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_194(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[194] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_195(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[195] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_196(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[196] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_197(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[197] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_198(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[198] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_199(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[199] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_200(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[200] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_201(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[201] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_202(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[202] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_203(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[203] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_204(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[204] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_205(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[205] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_206(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[206] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_207(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[207] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_208(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[208] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_209(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[209] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_210(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[210] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_211(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[211] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_212(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[212] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_213(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[213] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_214(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[214] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_215(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[215] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_216(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[216] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_217(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[217] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_218(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[218] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_219(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[219] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_220(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[220] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_221(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[221] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_222(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[222] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_223(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[223] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_224(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[224] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_225(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[225] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_226(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[226] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_227(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[227] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_228(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[228] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_229(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[229] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_230(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[230] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_231(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[231] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_232(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[232] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_233(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[233] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_234(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[234] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_235(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[235] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_236(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[236] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_237(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[237] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_238(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[238] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_239(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[239] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_240(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[240] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_241(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[241] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_242(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[242] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_243(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[243] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_244(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[244] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_245(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[245] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_246(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[246] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_247(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[247] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_248(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[248] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_249(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[249] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_250(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[250] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_251(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[251] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_252(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[252] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_253(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[253] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_254(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[254] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_255(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[255] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_256(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[256] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_257(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[257] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_258(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[258] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_259(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[259] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_260(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[260] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_261(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[261] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_262(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[262] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_263(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[263] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_264(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[264] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_265(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[265] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_266(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[266] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_267(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[267] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_268(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[268] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_269(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[269] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_270(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[270] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_271(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[271] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_272(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[272] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_273(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[273] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_274(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[274] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_275(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[275] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_276(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[276] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_277(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[277] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_278(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[278] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_279(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[279] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_280(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[280] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_281(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[281] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_282(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[282] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_283(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[283] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_284(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[284] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_285(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[285] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_286(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[286] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_287(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[287] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_288(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[288] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_289(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[289] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_290(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[290] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_291(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[291] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_292(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[292] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_293(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[293] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_294(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[294] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_295(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[295] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_296(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[296] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_297(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[297] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_298(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[298] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static NTSTATUS WINAPI wdf_stub_299(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
    ERR("wdf func_table[299] called! args: %p %p %p %p %p %p %p %p\n", a1, a2, a3, a4, a5, a6, a7, a8);
    return 0;
}

static void *wdf_stub_table[300] = {
    wdf_stub_0,
    wdf_stub_1,
    wdf_stub_2,
    wdf_stub_3,
    wdf_stub_4,
    wdf_stub_5,
    wdf_stub_6,
    wdf_stub_7,
    wdf_stub_8,
    wdf_stub_9,
    wdf_stub_10,
    wdf_stub_11,
    wdf_stub_12,
    wdf_stub_13,
    wdf_stub_14,
    wdf_stub_15,
    wdf_stub_16,
    wdf_stub_17,
    wdf_stub_18,
    wdf_stub_19,
    wdf_stub_20,
    wdf_stub_21,
    wdf_stub_22,
    wdf_stub_23,
    wdf_stub_24,
    wdf_stub_25,
    wdf_stub_26,
    wdf_stub_27,
    wdf_stub_28,
    wdf_stub_29,
    wdf_stub_30,
    wdf_stub_31,
    wdf_stub_32,
    wdf_stub_33,
    wdf_stub_34,
    wdf_stub_35,
    wdf_stub_36,
    wdf_stub_37,
    wdf_stub_38,
    wdf_stub_39,
    wdf_stub_40,
    wdf_stub_41,
    wdf_stub_42,
    wdf_stub_43,
    wdf_stub_44,
    wdf_stub_45,
    wdf_stub_46,
    wdf_stub_47,
    wdf_stub_48,
    wdf_stub_49,
    wdf_stub_50,
    wdf_stub_51,
    wdf_stub_52,
    wdf_stub_53,
    wdf_stub_54,
    wdf_stub_55,
    wdf_stub_56,
    wdf_stub_57,
    wdf_stub_58,
    wdf_stub_59,
    wdf_stub_60,
    wdf_stub_61,
    wdf_stub_62,
    wdf_stub_63,
    wdf_stub_64,
    wdf_stub_65,
    wdf_stub_66,
    wdf_stub_67,
    wdf_stub_68,
    wdf_stub_69,
    wdf_stub_70,
    wdf_stub_71,
    wdf_stub_72,
    wdf_stub_73,
    wdf_stub_74,
    wdf_stub_75,
    wdf_stub_76,
    wdf_stub_77,
    wdf_stub_78,
    wdf_stub_79,
    wdf_stub_80,
    wdf_stub_81,
    wdf_stub_82,
    wdf_stub_83,
    wdf_stub_84,
    wdf_stub_85,
    wdf_stub_86,
    wdf_stub_87,
    wdf_stub_88,
    wdf_stub_89,
    wdf_stub_90,
    wdf_stub_91,
    wdf_stub_92,
    wdf_stub_93,
    wdf_stub_94,
    wdf_stub_95,
    wdf_stub_96,
    wdf_stub_97,
    wdf_stub_98,
    wdf_stub_99,
    wdf_stub_100,
    wdf_stub_101,
    wdf_stub_102,
    wdf_stub_103,
    wdf_stub_104,
    wdf_stub_105,
    wdf_stub_106,
    wdf_stub_107,
    wdf_stub_108,
    wdf_stub_109,
    wdf_stub_110,
    wdf_stub_111,
    wdf_stub_112,
    wdf_stub_113,
    wdf_stub_114,
    wdf_stub_115,
    wdf_stub_116,
    wdf_stub_117,
    wdf_stub_118,
    wdf_stub_119,
    wdf_stub_120,
    wdf_stub_121,
    wdf_stub_122,
    wdf_stub_123,
    wdf_stub_124,
    wdf_stub_125,
    wdf_stub_126,
    wdf_stub_127,
    wdf_stub_128,
    wdf_stub_129,
    wdf_stub_130,
    wdf_stub_131,
    wdf_stub_132,
    wdf_stub_133,
    wdf_stub_134,
    wdf_stub_135,
    wdf_stub_136,
    wdf_stub_137,
    wdf_stub_138,
    wdf_stub_139,
    wdf_stub_140,
    wdf_stub_141,
    wdf_stub_142,
    wdf_stub_143,
    wdf_stub_144,
    wdf_stub_145,
    wdf_stub_146,
    wdf_stub_147,
    wdf_stub_148,
    wdf_stub_149,
    wdf_stub_150,
    wdf_stub_151,
    wdf_stub_152,
    wdf_stub_153,
    wdf_stub_154,
    wdf_stub_155,
    wdf_stub_156,
    wdf_stub_157,
    wdf_stub_158,
    wdf_stub_159,
    wdf_stub_160,
    wdf_stub_161,
    wdf_stub_162,
    wdf_stub_163,
    wdf_stub_164,
    wdf_stub_165,
    wdf_stub_166,
    wdf_stub_167,
    wdf_stub_168,
    wdf_stub_169,
    wdf_stub_170,
    wdf_stub_171,
    wdf_stub_172,
    wdf_stub_173,
    wdf_stub_174,
    wdf_stub_175,
    wdf_stub_176,
    wdf_stub_177,
    wdf_stub_178,
    wdf_stub_179,
    wdf_stub_180,
    wdf_stub_181,
    wdf_stub_182,
    wdf_stub_183,
    wdf_stub_184,
    wdf_stub_185,
    wdf_stub_186,
    wdf_stub_187,
    wdf_stub_188,
    wdf_stub_189,
    wdf_stub_190,
    wdf_stub_191,
    wdf_stub_192,
    wdf_stub_193,
    wdf_stub_194,
    wdf_stub_195,
    wdf_stub_196,
    wdf_stub_197,
    wdf_stub_198,
    wdf_stub_199,
    wdf_stub_200,
    wdf_stub_201,
    wdf_stub_202,
    wdf_stub_203,
    wdf_stub_204,
    wdf_stub_205,
    wdf_stub_206,
    wdf_stub_207,
    wdf_stub_208,
    wdf_stub_209,
    wdf_stub_210,
    wdf_stub_211,
    wdf_stub_212,
    wdf_stub_213,
    wdf_stub_214,
    wdf_stub_215,
    wdf_stub_216,
    wdf_stub_217,
    wdf_stub_218,
    wdf_stub_219,
    wdf_stub_220,
    wdf_stub_221,
    wdf_stub_222,
    wdf_stub_223,
    wdf_stub_224,
    wdf_stub_225,
    wdf_stub_226,
    wdf_stub_227,
    wdf_stub_228,
    wdf_stub_229,
    wdf_stub_230,
    wdf_stub_231,
    wdf_stub_232,
    wdf_stub_233,
    wdf_stub_234,
    wdf_stub_235,
    wdf_stub_236,
    wdf_stub_237,
    wdf_stub_238,
    wdf_stub_239,
    wdf_stub_240,
    wdf_stub_241,
    wdf_stub_242,
    wdf_stub_243,
    wdf_stub_244,
    wdf_stub_245,
    wdf_stub_246,
    wdf_stub_247,
    wdf_stub_248,
    wdf_stub_249,
    wdf_stub_250,
    wdf_stub_251,
    wdf_stub_252,
    wdf_stub_253,
    wdf_stub_254,
    wdf_stub_255,
    wdf_stub_256,
    wdf_stub_257,
    wdf_stub_258,
    wdf_stub_259,
    wdf_stub_260,
    wdf_stub_261,
    wdf_stub_262,
    wdf_stub_263,
    wdf_stub_264,
    wdf_stub_265,
    wdf_stub_266,
    wdf_stub_267,
    wdf_stub_268,
    wdf_stub_269,
    wdf_stub_270,
    wdf_stub_271,
    wdf_stub_272,
    wdf_stub_273,
    wdf_stub_274,
    wdf_stub_275,
    wdf_stub_276,
    wdf_stub_277,
    wdf_stub_278,
    wdf_stub_279,
    wdf_stub_280,
    wdf_stub_281,
    wdf_stub_282,
    wdf_stub_283,
    wdf_stub_284,
    wdf_stub_285,
    wdf_stub_286,
    wdf_stub_287,
    wdf_stub_288,
    wdf_stub_289,
    wdf_stub_290,
    wdf_stub_291,
    wdf_stub_292,
    wdf_stub_293,
    wdf_stub_294,
    wdf_stub_295,
    wdf_stub_296,
    wdf_stub_297,
    wdf_stub_298,
    wdf_stub_299,
};

typedef struct _WDF_VERSION {
    ULONG Major;
    ULONG Minor;
    ULONG Build;
} WDF_VERSION;

typedef struct _WDF_BIND_INFO {
    ULONG Size;
    WCHAR *Component;
    WDF_VERSION Version;
    ULONG FuncCount;
    void **FuncTable;
    void *Module;
} WDF_BIND_INFO, *PWDF_BIND_INFO;

typedef struct _WDF_COMPONENT_GLOBALS {
    ULONG Size;
    void *DriverObject;
    void *RegistryPath;
    void *FuncTable;
    ULONG Reserved[16];
} WDF_COMPONENT_GLOBALS, *PWDF_COMPONENT_GLOBALS;

typedef struct _WDFLDR_CLIENT_INFO {
    struct list entry;
    DRIVER_OBJECT *driver;
    UNICODE_STRING registry_path;
    WDF_COMPONENT_GLOBALS globals;
    void *func_table;
} WDFLDR_CLIENT_INFO;

static struct list client_list = LIST_INIT(client_list);
static CRITICAL_SECTION client_cs;
static CRITICAL_SECTION_DEBUG client_cs_debug =
{
    0, 0, &client_cs,
    { &client_cs_debug.ProcessLocksList, &client_cs_debug.ProcessLocksList },
      0, 0, { (DWORD_PTR)(__FILE__ ": client_cs") }
};
static CRITICAL_SECTION client_cs = { &client_cs_debug, -1, 0, 0, 0, 0 };

static inline LPCSTR debugstr_us( const UNICODE_STRING *us )
{
    if (!us) return "<null>";
    return debugstr_wn( us->Buffer, us->Length / sizeof(WCHAR) );
}

static WDFLDR_CLIENT_INFO *find_client_info(DRIVER_OBJECT *driver)
{
    WDFLDR_CLIENT_INFO *info;

    LIST_FOR_EACH_ENTRY(info, &client_list, WDFLDR_CLIENT_INFO, entry)
    {
        if (info->driver == driver)
            return info;
    }
    return NULL;
}

NTSTATUS WINAPI WdfVersionBind(DRIVER_OBJECT *driver, UNICODE_STRING *reg_path, 
                                WDF_BIND_INFO *bind_info, PWDF_COMPONENT_GLOBALS *component_globals)
{
    WDFLDR_CLIENT_INFO *client_info;
    NTSTATUS status = STATUS_SUCCESS;

    TRACE("%p %s version %lu.%lu.%lu, %lu functions\n", driver, debugstr_us(reg_path),
            bind_info->Version.Major, bind_info->Version.Minor,
            bind_info->Version.Build, bind_info->FuncCount);

    if (!driver || !reg_path || !bind_info || !component_globals)
    {
        ERR("WdfVersionBind: null parameter (driver=%p reg_path=%p bind_info=%p globals=%p)\n",
            driver, reg_path, bind_info, component_globals);
        return STATUS_INVALID_PARAMETER;
    }

    ERR("WdfVersionBind: bind_info->Size=%lu, sizeof(WDF_BIND_INFO)=%lu\n",
        bind_info->Size, (unsigned long)sizeof(WDF_BIND_INFO));

    if (bind_info->Size < sizeof(WDF_BIND_INFO))
    {
        ERR("WdfVersionBind: bind_info too small, rejecting\n");
        return STATUS_INVALID_PARAMETER;
    }

    EnterCriticalSection(&client_cs);

    /* check if driver is already bound */
    if (find_client_info(driver))
    {
        status = STATUS_OBJECT_NAME_COLLISION;
        goto done;
    }

    if (!(client_info = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*client_info))))
    {
        status = STATUS_NO_MEMORY;
        goto done;
    }

    client_info->registry_path.Length = reg_path->Length;
    client_info->registry_path.MaximumLength = reg_path->Length + sizeof(WCHAR);
    if (!(client_info->registry_path.Buffer = HeapAlloc(GetProcessHeap(), 0, 
                                                         client_info->registry_path.MaximumLength)))
    {
        HeapFree(GetProcessHeap(), 0, client_info);
        status = STATUS_NO_MEMORY;
        goto done;
    }
    memcpy(client_info->registry_path.Buffer, reg_path->Buffer, reg_path->Length);
    client_info->registry_path.Buffer[reg_path->Length / sizeof(WCHAR)] = 0;

    client_info->driver = driver;

    if (bind_info->FuncCount > 0)
    {
        unsigned int n;

        if (!(client_info->func_table = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY,
                                                  bind_info->FuncCount * sizeof(void *))))
        {
            HeapFree(GetProcessHeap(), 0, client_info->registry_path.Buffer);
            HeapFree(GetProcessHeap(), 0, client_info);
            status = STATUS_NO_MEMORY;
            goto done;
        }

        for (n = 0; n < bind_info->FuncCount && n < 300; n++)
            ((void **)client_info->func_table)[n] = wdf_stub_table[n];
    }

    if (bind_info->FuncTable)
    {
        *bind_info->FuncTable = client_info->func_table;
    }

    client_info->globals.Size = sizeof(WDF_COMPONENT_GLOBALS);
    client_info->globals.DriverObject = driver;
    client_info->globals.RegistryPath = &client_info->registry_path;
    client_info->globals.FuncTable = client_info->func_table;

    *component_globals = &client_info->globals;
    
    list_add_tail(&client_list, &client_info->entry);
    TRACE("driver %p bound successfully \n", driver);

done:
    LeaveCriticalSection(&client_cs);
    return status;
}

NTSTATUS WINAPI WdfVersionUnbind(UNICODE_STRING *reg_path, WDF_BIND_INFO *bind_info, 
                                  WDF_COMPONENT_GLOBALS *component_globals)
{
    FIXME("%s %p %p stub!\n", debugstr_us(reg_path), bind_info, component_globals);
    return STATUS_SUCCESS;
}
