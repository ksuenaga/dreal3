/*********************************************************************
Author: Soonho Kong <soonhok@cs.cmu.edu>

dReal -- Copyright (C) 2013 - 2016, the dReal Team

dReal is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

dReal is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with dReal. If not, see <http://www.gnu.org/licenses/>.
*********************************************************************/

#pragma once

#include <initializer_list>
#include <vector>

#include "contractor/contractor.h"
#include "ibex/ibex.h"

namespace dreal {
ibex::BitSet extract_bitset(std::vector<contractor> const & ctcs);
ibex::BitSet extract_bitset(std::initializer_list<contractor> const & ctcs);
}  // namespace dreal
