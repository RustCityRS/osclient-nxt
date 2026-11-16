// libs/game/shared/movement/CoordFine.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.shared

#include "CoordFine.h"

namespace jag::game {
    // 0x1001a1d80: CoordFine::operator=(CoordFine const&) has the same machine code as CoordFine::operator=(CoordFine&&)

    // 0x1006e5890
    CoordFine::CoordFine(int arg1, float arg2, float arg3, float arg4) : field_0(4294967295) {
        float* pfVar2 = &field_4;
        new (pfVar2) math::Vector3T();
        field_0 = arg1;
        float* pfVar1 = (float*)(*pfVar2)[0];
        *pfVar1 = arg2;
        pfVar1 = (float*)(*pfVar2)[1];
        *pfVar1 = arg3;
        pfVar2 = (float*)(*pfVar2)[2];
        *pfVar2 = arg4;
    }

    // 0x1006e5930
    CoordFine::CoordFine(int arg1, float arg2, float arg3) : field_0(4294967295) {
        float* pfVar3 = &field_4;
        new (pfVar3) math::Vector3T();
        field_0 = arg1;
        float* pfVar1 = (float*)(*pfVar3)[0];
        *pfVar1 = arg2;
        uint32_t* puVar2 = (uint32_t*)(*pfVar3)[1];
        *puVar2 = 0;
        pfVar3 = (float*)(*pfVar3)[2];
        *pfVar3 = arg3;
    }

    // 0x1006e59c0
    CoordFine::CoordFine(int arg1, const math::Vector3T<float>& vector3) : field_0(4294967295), field_0(arg1) {
        field_4.SetXYZ(vector3);
    }

    // 0x1006e5a10
    CoordFine::CoordFine(const CoordGrid& coordGrid, bool arg2) : field_0(4294967295) {
        uint32_t in_register_00000011;

        float* pfVar3 = &field_4;
        new (pfVar3) math::Vector3T();
        field_0 = coordGrid.field_0;
        unsigned int uVar1 = coordGrid.field_4;
        auto pfVar2 = pfVar3->SSOBeginPtr();
        *pfVar2 = (float)uVar1 * 128.0;
        uVar1 = coordGrid.field_8;
        pfVar2 = (float*)pfVar3->second();
        *pfVar2 = (float)uVar1 * 128.0;
        if ((((uint32_t)in_register_00000011 << 8) | (uint8_t)arg2) != 0) {
            pfVar2 = (float*)pfVar3->SSOBeginPtr();
            *pfVar2 = *pfVar2 + 64.0;
            pfVar3 = (float*)pfVar3->second();
            *pfVar3 = *pfVar3 + 64.0;
        }
    }

    // 0x1006e5af0
    CoordFine::CoordFine(PacketT<Array<unsigned char>>& arg1) : field_0(4294967295) {
        float* pfVar4 = &field_4;
        new (pfVar4) math::Vector3T();
        uint8_t bVar1 = arg1.g1();
        field_0 = (unsigned int)bVar1;
        int iVar2 = arg1.g4s();
        float* pfVar3 = (float*)(*pfVar4)[0];
        *pfVar3 = (float)iVar2;
        iVar2 = arg1.g4s();
        pfVar3 = (float*)(*pfVar4)[1];
        *pfVar3 = (float)iVar2;
        iVar2 = arg1.g4s();
        pfVar4 = (float*)(*pfVar4)[2];
        *pfVar4 = (float)iVar2;
    }

    // 0x1006e5bc0
    CoordFine::CoordFine(PacketT<Array<unsigned char, BucketAllocatorEASTL>>& arg1) : field_0(4294967295) {
        float* pfVar4 = &field_4;
        new (pfVar4) math::Vector3T();
        uint8_t bVar1 = arg1.g1();
        field_0 = (unsigned int)bVar1;
        int iVar2 = arg1.g4s();
        float* pfVar3 = (float*)(*pfVar4)[0];
        *pfVar3 = (float)iVar2;
        iVar2 = arg1.g4s();
        pfVar3 = (float*)(*pfVar4)[1];
        *pfVar3 = (float)iVar2;
        iVar2 = arg1.g4s();
        pfVar4 = (float*)(*pfVar4)[2];
        *pfVar4 = (float)iVar2;
    }

    // 0x1006e5c90
    void CoordFine::Serialise(PacketT<Array<unsigned char>>& arg1) const {
        arg1.p1<unsigned long>(field_0);
        float* this_00 = &field_4;
        float* pfVar1 = (float*)(*this_00)[0];
        arg1.p4<float>(*pfVar1);
        pfVar1 = (float*)(*this_00)[1];
        arg1.p4<float>(*pfVar1);
        pfVar1 = (float*)(*this_00)[2];
        arg1.p4<float>(*pfVar1);
    }

    // 0x1006e5d10
    void CoordFine::Serialise(PacketT<Array<unsigned char, BucketAllocatorEASTL>>& arg1) const {
        arg1.p1<oldscape::shared::LoginProt::ID>(field_0);
        float* this_00 = &field_4;
        float* pfVar1 = (float*)(*this_00)[0];
        arg1.p4<float>(*pfVar1);
        pfVar1 = (float*)(*this_00)[1];
        arg1.p4<float>(*pfVar1);
        pfVar1 = (float*)(*this_00)[2];
        arg1.p4<float>(*pfVar1);
    }

    // 0x1006e5d90
    bool CoordFine::operator<(const CoordFine& coordFine) const {
        bool bVar1 = true;
        if ((int)coordFine.field_0 <= (int)field_0) {
            if ((int)field_0 <= (int)coordFine.field_0) {
                if (field_4 < coordFine.field_4) {
                    return true;
                }
                if (field_4 <= coordFine.field_4) {
                    if (field_8 < coordFine.field_8) {
                        return true;
                    }
                    if (field_8 <= coordFine.field_8) {
                        return field_12 < coordFine.field_12;
                    }
                }
            }
            bVar1 = false;
        }
        return bVar1;
    }

    // 0x1006e5de0
    unsigned long CoordFine::FromString(StringView stringView) {
        char* pcVar3;
        fixed_string<char, 16>* this_00;
        fixed_string<char, 4096>* this_02;
        unsigned long uVar4;
        ReturnValue local_178;
        CoordFine local_140;

        StringView local_1a0(*stringView);
        StringView local_190;
        StringView local_1d0("(");
        long lVar2 = stringView->find(&local_1d0);
        if (lVar2 != -1) {
            if (lVar2 == 0) {
                LogAssert("translationOffset > 0",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/shared/movement/"
                          "CoordFine.cpp",
                          119, nullptr);
            }
            pcVar3 = (char*)(*stringView)[lVar2 + 1U];
            if (*pcVar3 != '+') {
                LogAssert("data[translationOffset + 1] == \'+\'",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/shared/movement/"
                          "CoordFine.cpp",
                          120, nullptr);
            }
            local_140 = ((unsigned long)&local_1a0)->substr(0);
            local_1a0 = local_140;
            ShuffledPacketFactory::p2_alt2();
            local_140 = ((unsigned long)stringView)->substr(lVar2 + 1U);
            local_190 = local_140;
        }
        CoordGrid local_1b0;
        StringView local_1c0(local_1a0);
        bool cVar1 = local_1b0.FromString(&local_1c0);
        if (!cVar1) {
            uVar4 = 0;
        } else {
            CoordFine(&local_140, &local_1b0, false);
            operator=(this, &local_140);
            cVar1 = local_190.empty();
            uVar4 = (((uint64_t)((int64_t)((unsigned long)stringView >> 8)) << 8) | (uint8_t)1);
            if (!cVar1) {
                local_140 = eastl::fixed_vector<eastl::fixed_string<char, 16>, 4ul>();
                tokenize<eastl::fixed_vector<eastl::fixed_string<char, 16>, 4ul>, StringView>(&local_140, &local_190,
                                                                                              ",", -1);
                lVar2 = local_140.size();
                if (lVar2 == 3) {
                    this_00 = &local_140[0];
                    lVar2 =
                        ((basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true>>*)local_140[0])
                            ->size();
                    local_178 = this_00->substr(1, lVar2 - 1);
                    this_02 = &local_140[0];
                    *this_02 = &local_178;
                }
                LogAssert("translationStrs.size() == 3",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/shared/movement/"
                          "CoordFine.cpp",
                          141, nullptr);
            }
        }
        return uVar4 & 4294967295;
    }

} // namespace jag::game
