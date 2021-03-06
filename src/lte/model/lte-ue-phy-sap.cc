/* -*-  Mode: C++; c-file-style: "gnu"; indent-tabs-mode:nil; -*- */
/*
 * Copyright (c) 2011 Centre Tecnologic de Telecomunicacions de Catalunya (CTTC)
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation;
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 * Author: Marco Miozzo <marco.miozzo@cttc.es>
 */


#include "lte-ue-phy-sap.h"


namespace ns3 {


LteUePhySapProvider::~LteUePhySapProvider ()
{
}


LteUePhySapUser::~LteUePhySapUser ()
{
}

std::vector<std::vector<double>>
LteUePhySapProvider::GetRssiMap ()
{
  std::vector<std::vector<double>> temp;
  return temp;
}

std::vector<std::vector<double>>
LteUePhySapProvider::GetRsrpMap ()
{
  std::vector<std::vector<double>> temp;
  return temp;
}

std::vector<std::vector<bool>>
LteUePhySapProvider::GetDecodingMap ()
{
  std::vector<std::vector<bool>> temp;
  return temp;
}

void
LteUePhySapProvider::MoveSensingWindow (uint32_t removeIdx, uint32_t scPeriod)
{
}

void
LteUePhySapProvider::SetNextTxTime (uint32_t txTime)
{
}

std::vector<uint32_t>
LteUePhySapProvider::GetFeedbackProvidedResources (uint32_t subChannel, uint32_t subFrame, uint32_t nFeedback, uint32_t totalRU)
{
  std::vector<uint32_t> temp;
  return temp;
}

} // namespace ns3
