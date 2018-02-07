/** @file
 The Header file of SerDes Module for LS2088A

 Copyright 2017 NXP

 This program and the accompanying materials
 are licensed and made available under the terms and conditions of the BSD License
 which accompanies this distribution. The full text of the license may be found
 http://opensource.org/licenses/bsd-license.php

 THE PROGRAM IS DISTRIBUTED UNDER THE BSD LICENSE ON AN "AS IS" BASIS,
 WITHOUT WARRANTIES OR REPRESENTATIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED.

**/

#ifndef __SOC_SERDES_H__
#define __SOC_SERDES_H__

#include <SerDes.h>

SERDES_CONFIG SerDes1ConfigTbl[] = {
  // SerDes 1
  { 0x03, { PCIE2, PCIE2, PCIE2, PCIE2, PCIE1, PCIE1, PCIE1, PCIE1 } },
  { 0x05, { PCIE2, PCIE2, PCIE2, PCIE2, SGMII4, SGMII3, SGMII2, SGMII1 } },
  { 0x07, { SGMII8, SGMII7, SGMII6, SGMII5, SGMII4, SGMII3, SGMII2, SGMII1 } },
  { 0x09, { SGMII8, SGMII7, SGMII6, SGMII5, SGMII4, SGMII3, SGMII2, SGMII1 } },
  { 0x0A, { SGMII8, SGMII7, SGMII6, SGMII5, SGMII4, SGMII3, SGMII2, SGMII1 } },
  { 0x0C, { SGMII8, SGMII7, SGMII6, SGMII5, SGMII4, SGMII3, SGMII2, SGMII1 } },
  { 0x0E, { SGMII8, SGMII7, SGMII6, SGMII5, SGMII4, SGMII3, SGMII2, SGMII1 } },
  { 0x26, { SGMII8, SGMII7, SGMII6, SGMII5, SGMII4, SGMII3, XFI2, XFI1 } },
  { 0x28, { SGMII8, SGMII7, SGMII6, SGMII5, XFI4, XFI3, XFI2, XFI1 } },
  { 0x2A, { XFI8, XFI7, XFI6, XFI5, XFI4, XFI3, XFI2, XFI1 } },
  { 0x2B, { SGMII8, SGMII7, SGMII6, SGMII5, XAUI1, XAUI1, XAUI1, XAUI1 } },
  { 0x32, { XAUI2, XAUI2, XAUI2, XAUI2, XAUI1, XAUI1, XAUI1, XAUI1 } },
  { 0x33, { PCIE2, PCIE2, PCIE2, PCIE2, QSGMII_D, QSGMII_C, QSGMII_B, QSGMII_A } },
  { 0x35, { QSGMII_D, QSGMII_C, QSGMII_B, PCIE2, XFI4, XFI3, XFI2, XFI1 } },
  {}
};

SERDES_CONFIG SerDes2ConfigTbl[] = {
  // SerDes 2
  { 0x07, { SGMII9, SGMII10, SGMII11, SGMII12, SGMII13, SGMII14, SGMII15, SGMII16 } },
  { 0x09, { SGMII9, SGMII10, SGMII11, SGMII12, SGMII13, SGMII14, SGMII15, SGMII16 } },
  { 0x0A, { SGMII9, SGMII10, SGMII11, SGMII12, SGMII13, SGMII14, SGMII15, SGMII16 } },
  { 0x0C, { SGMII9, SGMII10, SGMII11, SGMII12, SGMII13, SGMII14, SGMII15, SGMII16 } },
  { 0x0E, { SGMII9, SGMII10, SGMII11, SGMII12, SGMII13, SGMII14, SGMII15, SGMII16 } },
  { 0x3D, { PCIE3, PCIE3, PCIE3, PCIE3, PCIE3, PCIE3, PCIE3, PCIE3 } },
  { 0x3E, { PCIE3, PCIE3, PCIE3, PCIE3, PCIE3, PCIE3, PCIE3, PCIE3 } },
  { 0x3F, { PCIE3, PCIE3, PCIE3, PCIE3, PCIE4, PCIE4, PCIE4, PCIE4 } },
  { 0x40, { PCIE3, PCIE3, PCIE3, PCIE3, PCIE4, PCIE4, PCIE4, PCIE4 } },
  { 0x41, { PCIE3, PCIE3, PCIE3, PCIE3, PCIE4, PCIE4, SATA1, SATA2 } },
  { 0x42, { PCIE3, PCIE3, PCIE3, PCIE3, PCIE4, PCIE4, SATA1, SATA2 } },
  { 0x43, { PCIE3, PCIE3, PCIE3, PCIE3, NONE, NONE, SATA1, SATA2 } },
  { 0x44, { PCIE3, PCIE3, PCIE3, PCIE3, NONE, NONE, SATA1, SATA2 } },
  { 0x45, { SGMII9, SGMII10, SGMII11, SGMII12, PCIE4, PCIE4, PCIE4, PCIE4 } },
  { 0x47, { PCIE3, SGMII10, SGMII11, SGMII12, PCIE4, SGMII14, SGMII15, SGMII16 } },
  { 0x49, { SGMII9, SGMII10, SGMII11, SGMII12, PCIE4, PCIE4, SATA1, SATA2 } },
  { 0x4A, { SGMII9, SGMII10, SGMII11, SGMII12, PCIE4, PCIE4, SATA1, SATA2 } },
  {}
};

SERDES_CONFIG *SerDesConfigTbl[] = {
  SerDes1ConfigTbl,
  SerDes2ConfigTbl
};

#endif /* __SOC_SERDES_H */
