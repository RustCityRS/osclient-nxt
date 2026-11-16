// libs/oldscape/rs2lib/configdecoder/HeadbarType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.rs2lib

#include "HeadbarType.h"

namespace jag::oldscape::configdecoder {
    // 0x1016b9368
    int64_t HeadbarType::m_dataNotReady;

    // 0x1016b9370
    LRUHashCache<HeadbarType, 64ul, 65ul, false, unsigned long long> HeadbarType::m_recentUse;

    // 0x1016ba870, set at startup by ___cxx_global_var_init.1119
    LRUHashCache<graphics::Pix32, 64ul, 65ul, false, unsigned long long> HeadbarType::m_spriteCache =
        LRUHashCache<graphics::Pix32, 64ul, 65ul, false, unsigned long long>(64, "LRUHashCache");

    // 0x1016bbd70
    int64_t HeadbarType::m_pSprites;

    // 0x1016bbd78
    int64_t HeadbarType::m_pConfigClient;

    // 0x1002670a0
    void HeadbarType::Init(jagex3::Js5* js51, jagex3::Js5* js52) {
        m_pConfigClient = js51;
        m_pSprites = js52;
    }

    // 0x1002670c0
    auto HeadbarType::List(long long arg1) {
        uint8_t* puVar2;
        int* piVar3;
        HeadbarType* headbarType;
        PacketJ<Array<unsigned char> _>* packetJ;
        ReturnValue local_40;
        unsigned long long local_30[2];

        local_30[0] = arg1;
        auto groundDecor = m_recentUse.Find(*local_30);
        auto result(groundDecor);
        if (!result != nullptr) {
            new (local_30) shared_ptr();
            puVar2 = (uint8_t*)m_pConfigClient->GetFile(*local_30, 33, (int)arg1, nullptr);
            make_shared<HeadbarType>(&local_40);
            result = local_40;
            piVar3 = (int*)(result).operator->();
            *piVar3 = (int)arg1;
            if (puVar2 == DataStatus::READY) {
                headbarType = (HeadbarType*)(result).operator->();
                packetJ = (PacketJ<Array<unsigned char> _>*)**local_30;
                Decode(headbarType, packetJ);
            }
            local_40[0] = (ReturnValue)arg1;
            m_recentUse.Put(result, 1, local_40);
        }
        return result;
    }

    // 0x100267360
    void HeadbarType::Decode(PacketJ<Array<unsigned char>>& packetJ) {
        uint8_t bVar1;

        while (true) {
            bVar1 = packetJ.g1();
            if (bVar1 == 0)
                break;
            Decode(packetJ, (unsigned int)bVar1);
        }
    }

    // 0x100267490
    auto HeadbarType::GetFullSprite() {
        shared_ptr<dash3d::GroundDecor>* groundDecor;
        shared_ptr<dash3d::Decor> local_40;
        ReturnValue local_30;

        m_dataNotReady._0_1_ = 0;
        local_30[0] = (ReturnValue)(long)field_32;
        if ((long)local_30[0] < 0) {
            auto result;
        } else {
            groundDecor = (shared_ptr<dash3d::GroundDecor>*)m_spriteCache.Find(local_30);
            local_40 = shared_ptr(groundDecor);
            if (local_40 != nullptr) {
                result.shared_ptr<FileRSevenDebugPresetProvider, void>(local_40);
            } else {
                local_30 = graphics::pixloader::Makepix32(*m_pSprites, field_32, 0);
                local_40 = local_30;
                if (local_40 != nullptr) {
                    local_30[0] = (ReturnValue)(long)field_32;
                    m_spriteCache.Put(local_40, 1, local_30);
                } else {
                    m_dataNotReady._0_1_ = 1;
                }
                result.shared_ptr<FileRSevenDebugPresetProvider, void>(local_40);
            }
        }
        return result;
    }

    // 0x100267740
    auto HeadbarType::GetEmptySprite() {
        shared_ptr<dash3d::GroundDecor>* groundDecor;
        shared_ptr<dash3d::Decor> local_40;
        ReturnValue local_30;

        m_dataNotReady._0_1_ = 0;
        local_30[0] = (ReturnValue)(long)field_36;
        if ((long)local_30[0] < 0) {
            auto result;
        } else {
            groundDecor = (shared_ptr<dash3d::GroundDecor>*)m_spriteCache.Find(local_30);
            local_40 = shared_ptr(groundDecor);
            if (local_40 != nullptr) {
                result.shared_ptr<FileRSevenDebugPresetProvider, void>(local_40);
            } else {
                local_30 = graphics::pixloader::Makepix32(*m_pSprites, field_36, 0);
                local_40 = local_30;
                if (local_40 != nullptr) {
                    local_30[0] = (ReturnValue)(long)field_36;
                    m_spriteCache.Put(local_40, 1, local_30);
                } else {
                    m_dataNotReady._0_1_ = 1;
                }
                result.shared_ptr<FileRSevenDebugPresetProvider, void>(local_40);
            }
        }
        return result;
    }

    // 0x100267860
    void HeadbarType::ResetCache() {
        m_recentUse.Reset();
        m_spriteCache.Reset();
    }

    // 0x100267880
    void HeadbarType::PostDecode() {}

    // 0x100267890
    void HeadbarType::Decode(PacketJ<Array<unsigned char>>& packetJ, int arg2) {
        uint8_t bVar1;
        unsigned short uVar2;
        int iVar3;

        switch (arg2) {
        case 1:
            uVar2 = packetJ.g2();
            field_4 = (unsigned int)uVar2;
            break;
        case 2:
            bVar1 = packetJ.g1();
            field_8 = (unsigned int)bVar1;
            break;
        case 3:
            bVar1 = packetJ.g1();
            field_12 = (unsigned int)bVar1;
            break;
        case 4:
            field_16 = 0;
            break;
        case 5:
            uVar2 = packetJ.g2();
            field_24 = (unsigned int)uVar2;
            break;
        case 6:
            bVar1 = packetJ.g1();
            field_28 = (unsigned int)bVar1;
            break;
        case 7:
            iVar3 = packetJ.gSmart2or4s();
            field_32 = iVar3;
            break;
        case 8:
            iVar3 = packetJ.gSmart2or4s();
            field_36 = iVar3;
            break;
        case 11:
            uVar2 = packetJ.g2();
            field_16 = (unsigned int)uVar2;
            break;
        case 14:
            bVar1 = packetJ.g1();
            field_40 = (unsigned int)bVar1;
            break;
        case 15:
            bVar1 = packetJ.g1();
            field_44 = (unsigned int)bVar1;
        }
    }

} // namespace jag::oldscape::configdecoder

namespace jag {
    // 0x100267290
    shared_ptr_if_not_array<oldscape::configdecoder::HeadbarType>::type
    make_shared<oldscape::configdecoder::HeadbarType>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_2c;
        HeadbarType* local_28[2];

        auto arg1 = aligned_alloc(64, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::configdecoder::HeadbarType>::type result;
        } else {
            local_28[0] = placement_new<oldscape::configdecoder::HeadbarType>((void*)((long)arg1 + 16));
            local_2c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared_trivial<oldscape::configdecoder::HeadbarType>, int,
                              oldscape::configdecoder::HeadbarType*&>(arg1, &local_2c, local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

} // namespace jag
