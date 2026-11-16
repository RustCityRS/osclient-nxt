// libs/oldscape/jagex3/client/HookArg.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag::oldscape {
    class HookArg {
    public:
        HookArg(const rs2lib::worldmap::MapElementPosition& mapElementPosition);
        ~HookArg();
        unsigned int GetArgType() const;
        unsigned long operator==(const HookArg& hookArg) const;
        HookArg(int arg1);
        HookArg* operator=(HookArg&& hookArg);
        uint32_t IntValue() const;
        HookArg(const eastl::string& str);
        HookArg(eastl::string&& str);
        uint8_t* StrValue() const;
        HookArg();
        uint8_t* MapPos() const;
        HookArg(const HookArg& hookArg);
        HookArg(HookArg&& hookArg);

    private:
        unsigned int m_argType;
        uint8_t _unknown_4[36];
        MapElementPosition field_40;
        uint8_t _unknown_64[4];
    };

    // 0x10002ec30
    HookArg::HookArg(const rs2lib::worldmap::MapElementPosition& mapElementPosition)
        : m_argType(3), field_40(mapElementPosition) {}

    // 0x1000590a0: HookArg::~HookArg() has the same machine code as FolderSelection::FolderSelectionRequest::~FolderSelectionRequest()

    // 0x1000b9960: HookArg::GetArgType() const has the same machine code as ScriptVarType::GetID() const

    // 0x10014f2d0
    unsigned long HookArg::operator==(const HookArg& hookArg) const {
        bool bVar1;
        uint64_t extraout_var;
        unsigned long uVar4;

        unsigned int uVar3 = hookArg.m_argType;
        if (uVar3 == m_argType) {
            if (uVar3 != 3) {
                if (uVar3 == 2) {
                    bVar1 = field_8 == hookArg.field_8;
                    uVar4 = (((uint64_t)extraout_var << 8) | (uint8_t)bVar1) & 4294967295;
                } else {
                    if (uVar3 != 1) {
                        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                        "oldscape/jagex3/client/HookArg.h",
                                        139, "HookArg has unknown argType == returning false");
                    }
                    uVar4 = (((uint64_t)((int64_t)((unsigned long)this >> 8)) << 8) |
                             (uint8_t)(*(int*)field_40 == *(int*)hookArg.field_40));
                }
                goto LAB_10014f348;
            }
            if (*(int*)field_40 == *(int*)hookArg.field_40) {
                if ((*((field_40 + 4))) == (*((hookArg.field_40 + 4))) != '\0') {
                    uVar3 = (*((field_40 + 16))) == (*((hookArg.field_40 + 16)));
                    uVar4 = (unsigned long)uVar3;
                    goto LAB_10014f348;
                }
            }
        }
        uVar4 = 0;
    LAB_10014f348:
        return uVar4 & 4294967295;
    }

    // 0x100182a90
    HookArg* HookArg::operator=(HookArg&& hookArg) {
        uint64_t uVar2;
        uint64_t uVar3;
        uint64_t uVar4;

        unsigned int uVar1 = hookArg.m_argType;
        if (uVar1 == 3) {
            uVar2 = *(uint64_t*)hookArg.field_40;
            uVar3 = *(uint64_t*)(hookArg.field_40 + 8);
            uVar4 = *(uint64_t*)(hookArg.field_40 + 20);
            *(uint64_t*)(field_40 + 12) = *(uint64_t*)(hookArg.field_40 + 12);
            *(uint64_t*)(field_40 + 20) = uVar4;
            *(uint64_t*)field_40 = uVar2;
            *(uint64_t*)(field_40 + 8) = uVar3;
        } else {
            if (uVar1 == 2) {
                field_8 = &hookArg.field_8;
                goto LAB_100182ae1;
            }
            if (uVar1 != 1)
                goto LAB_100182ae1;
            *(uint32_t*)field_40 = *(uint32_t*)hookArg.field_40;
        }
        field_8.clear();
    LAB_100182ae1:
        m_argType = hookArg.m_argType;
        return this;
    }

    // 0x100182b80
    uint32_t HookArg::IntValue() const {
        if (m_argType != 1) {
            LogAssert("m_argType == INTEGER",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/client/"
                      "HookArg.h",
                      146, nullptr);
        }
        return *(uint32_t*)field_40;
    }

    // 0x100182d00
    uint8_t* HookArg::StrValue() const {
        if (m_argType != 2) {
            LogAssert("m_argType == STRING",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/client/"
                      "HookArg.h",
                      163, nullptr);
        }
        return &field_8;
    }

    // 0x100190ac0
    uint8_t* HookArg::MapPos() const {
        if (m_argType != 3) {
            LogAssert("m_argType == MAPPOS",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/client/"
                      "HookArg.h",
                      157, nullptr);
        }
        return field_40;
    }

    // 0x100197dc0
    HookArg::HookArg(int arg1) : m_argType(1) {
        *(int*)field_40 = arg1;
    }

    // 0x100197df0
    HookArg::HookArg(const eastl::string& str) : m_argType(2), field_8(str) {}

    // 0x100197df0: HookArg::HookArg(eastl::string&&) has the same machine code as HookArg::HookArg(eastl::string const&)

    // 0x100197e40
    HookArg::HookArg(const HookArg& hookArg) : m_argType(hookArg.m_argType), field_8(hookArg.field_8) {
        uint64_t uVar1;
        uint64_t uVar2;
        uint64_t uVar3;

        if (hookArg.m_argType == 3) {
            uVar1 = *(uint64_t*)hookArg.field_40;
            uVar2 = *(uint64_t*)(hookArg.field_40 + 8);
            uVar3 = *(uint64_t*)(hookArg.field_40 + 20);
            *(uint64_t*)(field_40 + 12) = *(uint64_t*)(hookArg.field_40 + 12);
            *(uint64_t*)(field_40 + 20) = uVar3;
            *(uint64_t*)field_40 = uVar1;
            *(uint64_t*)(field_40 + 8) = uVar2;
        } else if (hookArg.m_argType == 1) {
            *(uint32_t*)field_40 = *(uint32_t*)hookArg.field_40;
        }
    }

    // 0x1001981b0
    HookArg::HookArg() : m_argType(0) {}

    // 0x1001abbe0
    HookArg::HookArg(HookArg&& hookArg) : m_argType(hookArg.m_argType), field_8(hookArg.field_8) {
        uint64_t uVar1;
        uint64_t uVar2;
        uint64_t uVar3;

        if (hookArg.m_argType == 3) {
            uVar1 = *(uint64_t*)hookArg.field_40;
            uVar2 = *(uint64_t*)(hookArg.field_40 + 8);
            uVar3 = *(uint64_t*)(hookArg.field_40 + 20);
            *(uint64_t*)(field_40 + 12) = *(uint64_t*)(hookArg.field_40 + 12);
            *(uint64_t*)(field_40 + 20) = uVar3;
            *(uint64_t*)field_40 = uVar1;
            *(uint64_t*)(field_40 + 8) = uVar2;
        } else if (hookArg.m_argType == 1) {
            *(uint32_t*)field_40 = *(uint32_t*)hookArg.field_40;
        }
    }

} // namespace jag::oldscape

namespace jag {
    // 0x100027480
    bool operator!=
        <oldscape::rs2lib::worldmap::WorldmapAreaMetadata, oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(
            const shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>& clientScript1,
            const shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>& clientScript2) {
        long lVar1 = clientScript1.end();
        long lVar2 = clientScript2.end();
        return lVar1 != lVar2;
    }

} // namespace jag
