// libs/oldscape/jagex3/dash3d/AnimBase.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.oldscape.jagex3

namespace jag::oldscape::dash3d {
    class AnimBase {
    public:
        unsigned int GetNumT() const;
        AnimBase(int arg1, PacketJ<Array<unsigned char>>& packetJ);
        auto GetSkeleton() const;
        ~AnimBase();

    private:
        int field_0;
        unsigned int m_numT;
        uint8_t _unknown_8[144];
    };

    // 0x100073980: AnimBase::GetNumT() const has the same machine code as jag::math::Rect<int>::MinY() const

    // 0x100349640
    AnimBase::AnimBase(int arg1, PacketJ<Array<unsigned char>>& packetJ) : field_0(0), m_numT(0) {
        unsigned short uVar3;
        unsigned int uVar4;
        int iVar5;
        uint32_t uVar6;
        unsigned int* puVar7;
        vector<int>* pvVar8;
        vector<unsigned int>* pvVar9;
        uint32_t* puVar10;
        unsigned long uVar11;
        unsigned long uVar12;
        ReturnValue local_78;
        unsigned int local_54;

        vector<int>* local_48 = (vector<int>*)&field_8;
        new (local_48) eastl::vector<int>();
        vector<eastl::vector<int>>* local_38 = (vector<eastl::vector<int>>*)&field_40;
        new (local_38) eastl::vector<eastl::vector<int>>();
        shared_ptr<Skeleton>* local_60 = (shared_ptr<Skeleton>*)&field_72;
        new (local_60) shared_ptr();
        vector<int>* local_50 = (vector<int>*)&field_88;
        new (local_50) eastl::vector<int>();
        vector<int>* local_40 = (vector<int>*)&field_120;
        new (local_40) eastl::vector<int>();
        field_0 = arg1;
        uint8_t bVar2 = packetJ.g1();
        m_numT = (unsigned int)bVar2;
        local_48->resize((unsigned long)bVar2);
        local_38->resize((long)(int)m_numT);
        local_50->resize((long)(int)m_numT << 8);
        local_40->resize((long)(int)m_numT);
        if (0 < (int)m_numT) {
            uVar11 = 0;
            do {
                uVar4 = packetJ.g1();
                puVar7 = (unsigned int*)(*local_48)[uVar11];
                *puVar7 = uVar4 & 255;
                uVar11 = uVar11 + 1;
            } while ((long)uVar11 < (long)(int)m_numT);
        }
        if (0 < (int)m_numT) {
            uVar11 = 0;
            do {
                ((vector<eastl::pair<int, int>>*)(*local_38)[uVar11])->clear();
                pvVar8 = (vector<int>*)(*local_38)[uVar11];
                bVar2 = packetJ.g1();
                pvVar8->resize((unsigned long)bVar2);
                uVar11 = uVar11 + 1;
            } while ((long)uVar11 < (long)(int)m_numT);
        }
        if (0 < (int)m_numT) {
            uVar11 = 0;
            do {
                uVar12 = 0;
                while (true) {
                    pvVar9 = (vector<unsigned int>*)(*local_38)[uVar11];
                    iVar5 = pvVar9->size();
                    if ((long)iVar5 <= (long)uVar12)
                        break;
                    uVar4 = packetJ.g1();
                    pvVar8 = (vector<int>*)(*local_38)[uVar11];
                    puVar7 = (unsigned int*)(*pvVar8)[uVar12];
                    *puVar7 = uVar4 & 255;
                    puVar7 =
                        (unsigned int*)(*local_50)[(unsigned long)((unsigned int)uVar11 & 16777215) * 256 + uVar12];
                    *puVar7 = uVar4 & 255;
                    uVar12 = uVar12 + 1;
                }
                uVar11 = uVar11 + 1;
            } while ((long)uVar11 < (long)(int)m_numT);
        }
        if (0 < (int)m_numT) {
            uVar11 = 0;
            do {
                pvVar9 = (vector<unsigned int>*)(*local_38)[uVar11];
                uVar6 = pvVar9->size();
                puVar10 = (uint32_t*)(*local_40)[uVar11];
                *puVar10 = uVar6;
                uVar11 = uVar11 + 1;
            } while ((long)uVar11 < (long)(int)m_numT);
        }
        uVar11 = packetJ.size();
        uVar12 = ((vector<EntityHighlight*, BucketAllocatorEASTL>*)packetJ.GetDataArrayPtr())->end();
        if (uVar11 < uVar12) {
            uVar3 = packetJ.g2();
            local_54 = (unsigned int)uVar3;
            if (uVar3 != 0) {
                make_shared<Skeleton, PacketJ<Array<unsigned char>>&, int&>(&local_78, packetJ, (int*)&local_54);
                *local_60 = local_78;
            }
        }
    }

    // 0x10034edf0
    auto AnimBase::GetSkeleton() const {
        return auto(&field_72);
    }

    // 0x100377400
    AnimBase::~AnimBase() {
        field_120.~vector();
        field_88.~vector();
        field_72.~shared_ptr();
        field_40.~vector();
        field_8.~vector();
    }

} // namespace jag::oldscape::dash3d

namespace jag {
    // 0x1003499f0
    shared_ptr_if_not_array<oldscape::dash3d::Skeleton>::type
    make_shared<oldscape::dash3d::Skeleton, oldscape::PacketJ<Array<unsigned char>>&, int&>(
        oldscape::PacketJ<Array<unsigned char>>& packetJ, int& arg2) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_3c;
        Skeleton* local_38[2];

        auto arg1 = aligned_alloc(64, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::dash3d::Skeleton>::type result;
        } else {
            local_38[0] = placement_new<oldscape::dash3d::Skeleton, oldscape::PacketJ<Array<unsigned char>>&, int&>(
                (void*)((long)arg1 + 32), packetJ, arg2);
            local_3c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::dash3d::Skeleton>, int, oldscape::dash3d::Skeleton*&>(
                    arg1, &local_3c, local_38);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_38[0]);
        }
        return result;
    }

} // namespace jag
