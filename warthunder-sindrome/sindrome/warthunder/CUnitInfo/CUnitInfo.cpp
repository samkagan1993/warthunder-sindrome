#include "CUnitInfo.h"
#include "../../memory/Memory.h"
#include "../offsets.h"

auto CUnitInfo::bombsight_local(const bool enabled) -> void
{
	memory->write<bool>(this->base_address + offsets::unit_info::bombsight, enabled);
}

auto CUnitInfo::is_valid() -> const bool
{
	return this->base_address != 0;
}