// libs/graphics/runetek5/MaterialRawLoader.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "MaterialRawLoader.h"

namespace jag::graphics {
    // 0x10000b400: MaterialRawLoader::Initialise(MaterialRawProvider*) has the same machine code as eastl::string::Layout::SetHeapBeginPtr(char*)

    // 0x100024170: MaterialRawLoader::GetMaterialCount() const has the same machine code as oldscape::option::IScriptOption::GetId() const

    // 0x1000b9950: MaterialRawLoader::GetMaterialRaws() const has the same machine code as oldscape::ScriptVarType::GetDefaultValue() const

    // 0x1000e5d50, the same machine code as oldscape::rs2lib::CoordZoneSource::GetRotation() const
    unsigned int MaterialRawLoader::GetMaxMaterialID() const {
        return m_materialCount;
    }

    // 0x1001a3c10: MaterialRawLoader::GetDefaultMaterial() const has the same machine code as MainLoopFrameTimer::GetFPSCounter()

    // 0x10097cd00
    unsigned long MaterialRawLoader::MainLogic() {
        long* plVar1;
        uint8_t bVar3;
        unsigned int uVar4;
        uint64_t uVar5;
        unsigned long arg1;
        uint64_t unaff_R14;

        uint8_t* this_00 = &field_16;
        bool cVar2 = this_00->empty();
        unsigned long uVar6 = (((uint64_t)((int64_t)((unsigned long)unaff_R14 >> 8)) << 8) | (uint8_t)1);
        if (cVar2) {
            cVar2 = (**(void (**)(...))(*field_0 + 16))();
            if (!cVar2) {
                uVar6 = 0;
            } else {
                m_materialCount = 0;
                uVar4 = (**(void (**)(...))(*field_0 + 24))();
                if (0 < (int)uVar4) {
                    m_maxMaterialID = uVar4;
                    this_00->set_max_size((unsigned long)(uVar4 + 1), 0);
                    if (m_maxMaterialID != 0) {
                        arg1 = 0;
                        do {
                            plVar1 = field_0;
                            uVar5 = (*this_00)[arg1];
                            bVar3 = (**(void (**)(...))(*plVar1 + 32))(plVar1, uVar5, arg1 & 4294967295);
                            m_materialCount = m_materialCount + (unsigned int)bVar3;
                            arg1 = arg1 + 1;
                        } while (arg1 < m_maxMaterialID);
                    }
                }
            }
        }
        return uVar6 & 4294967295;
    }

    // 0x10097cfa0
    void MaterialRawLoader::Destruct() {
        m_materialCount = 0;
        m_maxMaterialID = 0;
        field_16.clear();
    }

} // namespace jag::graphics
