// Copyright 2019-2021 the nyan authors, LGPLv3+. See copying.md for legal info.
#pragma once

#include <unordered_set>

#include "value_holder.h"
#include "../datastructure/orderedset.h"


namespace nyan {

/** datatype used for (unordered) set storage */
using set_t = std::unordered_set<ValueHolder>;


/** datatype used for ordered set storage */
using ordered_set_t = datastructure::OrderedSet<ValueHolder>;

} // namespace nyan
