// libs/bytepacking/PacketView.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.oldscape.jagex3

namespace jag {
    class PacketView {
    public:
        unsigned long GetPos() const;
        void GetSize() const;
        void GetDataPtr() const;
        PacketView(const unsigned char* arg1, unsigned long arg2);
        PacketView(WrapArray<unsigned char const> wrapArray);
        ~PacketView();
        PacketView(PacketView&& packetView);
        PacketView(const PacketView& packetView);
        PacketView();
        PacketView<Array<unsigned char>>(const shared_ptr<PacketT<Array<unsigned char>>>& arg1);
        PacketView* operator=(PacketView&& packetView);
        PacketView<Array<unsigned char>>(const PacketT<Array<unsigned char>>& arg1);
        void SetPos(unsigned long arg1);

    private:
        uint64_t field_0;
        uint8_t _unknown_8[8];
        unsigned long m_pos;
        uint8_t _unknown_24[8];
    };

    // 0x100023f30: PacketView::GetPos() const has the same machine code as oldscape::option::IOption::GetName() const

    // 0x10007e680: PacketView::GetSize() const has the same machine code as eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true>::get_name() const

    // 0x10017b8a0: PacketView::GetDataPtr() const has the same machine code as PacketT<Array<unsigned char, BucketAllocatorEASTL>>::GetSize() const

    // 0x1002b4f80
    void LoadingScreenScript::Advance(unsigned int arg1) {
        unsigned long uVar2 = FrameTime::GetCurrentTimeMS();
        unsigned long uVar1 = field_64;
        unsigned int arg1_00 = (int)uVar2 - (int)uVar1;
        if (uVar2 <= uVar1) {
            arg1_00 = 0;
        }
        if (uVar1 == 0) {
            arg1_00 = 0;
        }
        field_64 = uVar2;
        auto this_00 = field_120.data();
        auto pLVar3 = field_120.end();
        for (; this_00 != pLVar3; this_00 = this_00 + 1) {
            this_00->Advance(arg1_00, arg1);
        }
    }

    // 0x1002b5030
    void LoadingScreenScript::LoadingScreenAnimation::Advance(unsigned int arg1, unsigned int arg2) {
        unsigned int uVar2;
        long* plVar4;
        long lVar5;
        unsigned int* puVar6;
        long lVar7;
        unsigned int uVar8;
        uint64_t uStack_70;
        hashtable_iterator<eastl::pair<long long const, unsigned int>, true, false>* local_68[2];
        uint64_t uStack_50;

        if (field_8 == '\0') {
            field_4 = field_4 + arg1;
        } else {
            field_4 = (arg2 * field_0) / 100;
        }
        uint8_t* puVar1 = &field_72;
        auto local_40 = puVar1->end();
        auto local_58 = puVar1->begin();
        bool cVar3 = local_58 != local_40;
        if (cVar3) {
            do {
                plVar4 = (long*)local_58.HeapBeginPtr();
                lVar7 = *plVar4;
                lVar5 = local_58.HeapBeginPtr();
                uVar2 = *(unsigned int*)(lVar7 + 24);
                uVar8 = field_4;
                if (uVar2 < field_4) {
                    uVar8 = uVar2;
                }
                **(int**)(lVar7 + 8) =
                    (int)((uVar8 - *(int*)(lVar5 + 8)) * (*(int*)(lVar7 + 16) - *(int*)(lVar7 + 20))) /
                        (int)(uVar2 - *(int*)(lVar5 + 8)) +
                    *(int*)(lVar7 + 20);
                if (uVar8 == *(unsigned int*)(lVar7 + 24)) {
                    new (local_68) eastl::hashtable_iterator(&local_58);
                    local_58 = puVar1->erase(local_68[0]);
                    uStack_50 = uStack_70;
                } else {
                    ++local_58;
                }
                cVar3 = local_58 != local_40;
            } while (cVar3);
        }
        local_40.end();
        puVar1 = &field_224;
        cVar3 = *puVar1 != local_40;
        if (cVar3) {
            do {
                puVar6 = (unsigned int*)**puVar1;
                if (field_4 < *puVar6)
                    break;
                lVar7 = **puVar1;
                puVar6 = (unsigned int*)**puVar1;
                cVar3 = DoKeyframes(*((lVar7 + 8)), *puVar6);
                if (cVar3) {
                    ++*puVar1;
                }
                cVar3 = *puVar1 != local_40;
            } while (cVar3);
        }
        if (field_0 <= field_4) {
            if (field_12 == 1) {
                field_4 = field_0;
            } else if (field_12 == 0) {
                Reset();
            }
        }
    }

    // 0x1002b51f0
    void LoadingScreenScript::LoadingScreenAnimation::Reset() {
        long* plVar2;

        field_72.clear();
        field_4 = 0;
        field_224 = field_128.rbegin();
        auto this_00 = field_48.data();
        auto puVar1 = field_48.end();
        for (; this_00 != puVar1; this_00 = this_00 + 8) {
            plVar2 = (long*)(*this_00).operator->();
            (**(void (**)(...))(*plVar2 + 24))(plVar2);
        }
    }

    // 0x1002b5290
    bool
    LoadingScreenScript::LoadingScreenAnimation::DoKeyframes(eastl::vector<LoadingScreenScript::Keyframe>& keyframes,
                                                             unsigned int arg2) {
        unsigned int uVar1;
        long lVar2;
        bool cVar4;
        unsigned int* puVar7;
        long* plVar8;
        long lVar9;
        unsigned int uVar10;
        uint64_t uStack_80;
        hashtable_iterator<eastl::pair<long long const, unsigned int>, true, false>* local_78[2];
        ReturnValue local_68;
        ReturnValue local_58;
        uint64_t uStack_50;

        ReturnValue RVar5 = (ReturnValue)keyframes.HeapBeginPtr();
        ReturnValue RVar6 = (ReturnValue)keyframes.end();
        uint8_t* this_00 = &field_72;
        if (RVar5 == RVar6) {
            uVar10 = 4294967295;
        } else {
            uVar10 = 4294967295;
            do {
                switch (*(uint32_t*)RVar5) {
                case 0:
                    *(bool*)*(uint64_t*)((long)RVar5 + 8) = *(int*)((long)RVar5 + 16) != 0;
                    break;
                case 1:
                    **(uint32_t**)((long)RVar5 + 8) = *(uint32_t*)((long)RVar5 + 16);
                    break;
                case 2:
                    *(uint32_t*)((long)RVar5 + 20) = **(uint32_t**)((long)RVar5 + 8);
                    local_68[0] = RVar5;
                    puVar7 = (unsigned int*)(*this_00)[local_68];
                    *puVar7 = arg2;
                    break;
                case 3:
                    uVar10 = *(unsigned int*)((long)RVar5 + 16);
                    break;
                case 4:
                    (**(void (**)(...))(*field_16 + 56))(field_16, *(uint64_t*)((long)RVar5 + 8));
                }
                RVar5 = (ReturnValue)((long)RVar5 + 32);
            } while (RVar5 != RVar6);
        }
        if (uVar10 != 4294967295) {
            local_68 = this_00->end();
            local_58 = this_00->begin();
            cVar4 = local_58 != local_68;
            if (cVar4) {
                do {
                    plVar8 = (long*)local_58.HeapBeginPtr();
                    lVar2 = *plVar8;
                    lVar9 = local_58.HeapBeginPtr();
                    uVar1 = *(unsigned int*)(lVar9 + 8);
                    if (*(unsigned int*)(lVar2 + 24) <= uVar10) {
                        **(uint32_t**)(lVar2 + 8) = *(uint32_t*)(lVar2 + 16);
                    }
                    if ((uVar10 < uVar1) || (*(unsigned int*)(lVar2 + 24) <= uVar10)) {
                        new (local_78) eastl::hashtable_iterator(&local_58);
                        local_58 = this_00->erase(local_78[0]);
                        uStack_50 = uStack_80;
                    } else {
                        ++local_58;
                    }
                    cVar4 = local_58 != local_68;
                } while (cVar4);
            }
            field_4 = uVar10;
            local_58 = field_128.lower_bound(field_4);
            field_224 = local_58;
        }
        return uVar10 == 4294967295;
    }

    // 0x1002b54b0
    void LoadingScreenScript::LoadingScreenAnimation::OnTrigger(const eastl::string& str) {
        long lVar2;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_38;

        auto local_30 = field_176.find(str);
        local_38.end();
        if (local_30 != local_38 != '\0') {
            lVar2 = *local_30;
            DoKeyframes(*((lVar2 + 32)), field_4);
        }
    }

    // 0x1002b5600
    void LoadingScreenScript::DestroyResources() {
        field_120.clear();
        field_72.reset();
        *(uint64_t*)(field_8 + 8) = 0;
        *(uint64_t*)(field_8 + 32) = 0;
    }

    // 0x1002b5690
    void LoadingScreenScript::Render(oldscape::graphics::Pix2D& pix2D, int arg2, int arg3) {
        uint32_t in_register_00000014;

        field_8->Render(pix2D, *((LoadingScreenAnimation*)(((uint64_t)in_register_00000014 << 32) | (uint32_t)arg2)),
                        arg2, arg3);
    }

    // 0x1002b56b0
    void LoadingScreenScript::ChildAnimLayer::Render(
        oldscape::graphics::Pix2D& pix2D, const LoadingScreenScript::LoadingScreenAnimation& loadingScreenAnimation,
        int arg3, int arg4) const {
        uint8_t* this_00;
        int iVar1;
        int iVar2;
        LoadingScreenAnimation* pLVar3;
        unique_ptr<LoadingScreenScript::AnimLayer>* this_01;
        unique_ptr<LoadingScreenScript::AnimLayer>* puVar4;
        long* plVar5;

        if (field_24 != '\0') {
            iVar1 = field_16;
            iVar2 = field_20;
            pLVar3 = field_8;
            this_00 = &pLVar3->field_48;
            this_01 = (unique_ptr<LoadingScreenScript::AnimLayer>*)this_00->data();
            puVar4 = (unique_ptr<LoadingScreenScript::AnimLayer>*)this_00->end();
            for (; this_01 != puVar4; this_01 = this_01 + 8) {
                plVar5 = (long*)(*this_01).operator->();
                (**(void (**)(...))(*plVar5 + 16))(plVar5, pix2D, pLVar3, arg3 + iVar1, arg4 + iVar2);
            }
        }
    }

    // 0x1002b5740
    void LoadingScreenScript::BroadcastTrigger(const char* str) {
        eastl::string local_58;

        auto this_00 = field_120.data();
        auto pLVar1 = field_120.end();
        if (this_00 != pLVar1) {
            do {
                local_58 = eastl::string(str);
                this_00->OnTrigger(local_58);
                this_00 = this_00 + 1;
            } while (this_00 != pLVar1);
        }
    }

    // 0x1002b57e0
    void LoadingScreenScript::CreateFont(const unsigned char* arg1, unsigned long arg2, const unsigned char* arg3,
                                         unsigned long arg4) {
        WindowSavedPosition local_70;
        WindowSavedPosition local_50;

        local_70.PacketT(arg1, arg2);
        local_50.PacketT(arg3, arg4);
        auto local_30 = oldscape::graphics::pixloader::MakepixfontGeneric(local_70, local_50);
        field_72 = local_30;
    }

    // 0x1002b58a0
    void
    LoadingScreenScript::SpriteLayer::Render(oldscape::graphics::Pix2D& pix2D,
                                             const LoadingScreenScript::LoadingScreenAnimation& loadingScreenAnimation,
                                             int arg3, int arg4) const {
        int iVar1;
        int iVar2;
        uint64_t uVar3;

        if ((field_44 != '\0') && (field_36 != 0)) {
            iVar1 = field_12;
            iVar2 = field_16;
            uVar3 = loadingScreenAnimation.field_24[(unsigned long)field_8];
            (**(void (**)(...))(pix2D.field_0 + 192))(pix2D, uVar3, arg3 + iVar1, arg4 + iVar2, field_20, field_24,
                                                      field_28, field_32, field_36, field_40);
        }
    }

    // 0x1002b59b0
    void
    LoadingScreenScript::RectLayer::Render(oldscape::graphics::Pix2D& pix2D,
                                           const LoadingScreenScript::LoadingScreenAnimation& loadingScreenAnimation,
                                           int arg3, int arg4) const {
        unsigned int uVar1;
        int arg1;
        int arg2;

        if ((field_36 != '\0') && (field_32 != 0)) {
            arg1 = arg3 + field_8;
            arg2 = arg4 + field_12;
            uVar1 = field_28;
            if (16777215 < uVar1) {
                pix2D.DrawRectTrans(arg1, arg2, field_16 + 2, field_20 + 2, uVar1 & 16777215, uVar1 >> 24);
                arg1 = arg1 + 1;
                arg2 = arg2 + 1;
            }
            uVar1 = field_24;
            if (16777215 < uVar1) {
                (**(void (**)(...))(pix2D.field_0 + 24))(pix2D, arg1, arg2, field_16, field_20, uVar1 & 16777215,
                                                         uVar1 >> 24);
            }
        }
    }

    // 0x1002b5a70
    void
    LoadingScreenScript::TextLayer::Render(oldscape::graphics::Pix2D& pix2D,
                                           const LoadingScreenScript::LoadingScreenAnimation& loadingScreenAnimation,
                                           int arg3, int arg4) const {
        int iVar1;
        int iVar2;
        int iVar3;
        long lVar4;
        int* piVar6;
        shared_ptr<oldscape::midi2::MidiPlayerMainThread>* midiPlayerMainThread;

        if (field_40 != '\0') {
            iVar1 = field_8;
            iVar2 = field_12;
            midiPlayerMainThread =
                (shared_ptr<oldscape::midi2::MidiPlayerMainThread>*)(loadingScreenAnimation.field_16 + 9);
            if (*midiPlayerMainThread != nullptr) {
                piVar6 = (int*)(*midiPlayerMainThread).operator->();
                lVar4 = loadingScreenAnimation.field_16[18];
                iVar3 = *piVar6;
                ((PixfontGeneric*)(*midiPlayerMainThread).operator->())
                    ->DrawStringMultiline(*((loadingScreenAnimation.field_16 + 11)), iVar1 + arg3, iVar2 + arg4,
                                          field_16, field_20, field_24, field_28, field_32, field_36,
                                          (int)lVar4 + iVar3, pix2D);
            }
        }
    }

    // 0x1002d9ea0
    PacketView::PacketView(WrapArray<unsigned char const> wrapArray) {
        WrapArray<WrapArray<game::Cutscene2DAnimation<float>::Key const>>(*wrapArray);
        m_pos = 0;
        new (&field_24) shared_ptr();
    }

    // 0x1002d9f10
    PacketView::PacketView(const unsigned char* arg1, unsigned long arg2) : WrapArray(arg1, arg2), m_pos(0) {
        new (&field_24) shared_ptr();
    }

    // 0x1003d5ac0: PacketView::~PacketView() has the same machine code as game::WorldMap::TerrainUnderlayTexture::~TerrainUnderlayTexture()

    // 0x10054ce10
    PacketView::PacketView(PacketView&& packetView) : WrapArray(packetView), m_pos(packetView.m_pos) {
        field_24.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(packetView.field_24);
    }

    // 0x10082e500
    PacketView::PacketView(const PacketView& packetView)
        : WrapArray(packetView), m_pos(packetView.m_pos), field_24(&packetView.field_24) {}

    // 0x1008cfc30
    PacketView::PacketView() : shared_ptr(), m_pos(0) {
        new (&field_24) shared_ptr();
    }

    // 0x1008cfc70
    PacketView* PacketView::operator=(PacketView&& packetView) {
        *this = packetView;
        m_pos = packetView.m_pos;
        field_24 = packetView.field_24;
        return this;
    }

    // 0x1008cfcb0
    PacketView::PacketView<Array<unsigned char>>(const shared_ptr<PacketT<Array<unsigned char>>>& arg1)
        : shared_ptr(), m_pos(0) {
        Layout* this_00;
        Array<graphics::Joint>* joints;
        WrapArray<unsigned char const> local_30;

        new (&field_24) shared_ptr();
        if (arg1.operator_cast_to_bool() != '\0') {
            this_00 = (Layout*)arg1.operator->();
            joints = (Array<graphics::Joint>*)this_00->SSOBeginPtr();
            local_30.WrapArray<Array<unsigned char>>(*joints);
            *this = local_30;
            static_pointer_cast<oldscape::ClientEntity, shared_ptr<oldscape::ClientNpc>>(&local_30);
            field_24 = local_30;
        }
    }

    // 0x1009fbbc0
    PacketView::PacketView<Array<unsigned char>>(const PacketT<Array<unsigned char>>& arg1) {
        auto joints = arg1.SSOBeginPtr();
        WrapArray<Array<unsigned char>>(*joints);
        m_pos = 0;
        new (&field_24) shared_ptr();
    }

    // 0x100a0d120
    void PacketView::SetPos(unsigned long arg1) {
        if (HeapBeginPtr() < arg1) {
            LogAssert("_pos <= m_data.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/PacketView.h",
                      77, "Packet: Invalid pos");
        }
        m_pos = arg1;
    }

} // namespace jag

namespace jag::oldscape {
    // 0x1002b5890
    void PacketJ<Array<unsigned char>>::PacketT(const unsigned char* arg1, unsigned long arg2) {
        PacketT(this, arg1, arg2);
    }

} // namespace jag::oldscape
