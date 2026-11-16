// libs/graphics/runetek5/MaterialRawLoader.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "MaterialRawLoader.h"

namespace jag::graphics {
    // 0x10000b400: the linker folded this into eastl::string::Layout::SetHeapBeginPtr(char*), which has identical code
    MaterialRawLoader::Initialise(MaterialRawProvider*);

    // 0x100024170: the linker folded this into oldscape::option::IScriptOption::GetId() const, which has identical code
    uint MaterialRawLoader::GetMaterialCount() const;

    // 0x1000b9950: the linker folded this into oldscape::ScriptVarType::GetDefaultValue() const, which has identical code
    MaterialRawLoader::GetMaterialRaws() const;

    // 0x1000e5d50: the linker folded this into oldscape::rs2lib::CoordZoneSource::GetRotation() const, which has identical code
    uint MaterialRawLoader::GetMaxMaterialID() const;

    // 0x1001a3c10: the linker folded this into MainLoopFrameTimer::GetFPSCounter(), which has identical code
    MaterialRawLoader::GetDefaultMaterial() const;

    // 0x10097cd00, 192 bytes, placed by class name and debug map
    // MaterialRawLoader::MainLogic()
    ulong MaterialRawLoader::MainLogic() {
        undefined1* this_00;
        long* plVar1;
        char cVar2;
        byte bVar3;
        uint uVar4;
        undefined8 uVar5;
        ulong uVar6;
        undefined8 unaff_R14;
        ulong uVar7;

        this_00 = &field_16;
        cVar2 = this_00->empty();
        uVar7 = CONCAT71((int7)((ulong)unaff_R14 >> 8), 1);
        if (cVar2 != '\0') {
            cVar2 = (**(code**)(*field_0 + 16))();
            if (cVar2 == '\0') {
                uVar7 = 0;
            } else {
                m_materialCount = 0;
                uVar4 = (**(code**)(*field_0 + 24))();
                if (0 < (int)uVar4) {
                    m_maxMaterialID = uVar4;
                    this_00->set_max_size((ulong)(uVar4 + 1), 0);
                    if (m_maxMaterialID != 0) {
                        uVar6 = 0;
                        do {
                            plVar1 = field_0;
                            uVar5 = Array<MaterialRaw, eastl::allocator>::operator[](
                                (Array<MaterialRaw, eastl::allocator>*)this_00, uVar6);
                            bVar3 = (**(code**)(*plVar1 + 32))(plVar1, uVar5, uVar6 & 4294967295);
                            m_materialCount = m_materialCount + (uint)bVar3;
                            uVar6 = uVar6 + 1;
                        } while (uVar6 < m_maxMaterialID);
                    }
                }
            }
        }
        return uVar7 & 4294967295;
    }

    // 0x10097cfa0, 32 bytes, placed by class name and debug map
    // MaterialRawLoader::Destruct()
    void MaterialRawLoader::Destruct() {
        m_materialCount = 0;
        m_maxMaterialID = 0;
        (&field_16)->clear();
    }

} // namespace jag::graphics
