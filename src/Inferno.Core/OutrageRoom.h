#pragma once
#include "Level.h"
#include "OutrageTable.h"
#include "Types.h"

namespace Inferno {
    void WriteSegmentsToOrf(Level& level, span<SegID> segs, const std::filesystem::path& path, const Outrage::GameTable& table);
}
