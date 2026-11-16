// libs/game/runetek5/config/iftype/components/ModelGroup.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "ModelGroup.h"

namespace jag::game {
    // 0x100f3ca70, 4 bytes, __data
    float ModelGroup::CameraInfo::DEFAULT_CLIP_PLANE_NEAR = 10.0f;

    // 0x100f3ca74, 4 bytes, __data
    float ModelGroup::CameraInfo::DEFAULT_CLIP_PLANE_FAR = 10000.0f;

    // 0x100f3ca78, 4 bytes, __data
    float ModelGroup::CameraInfo::DEFAULT_FOV = 90.0f;

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    ModelGroup::SetScrollPos(int, int);

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    ModelGroup::SetScrollSize(int, int);

    // 0x100023b60: the linker folded this into hal::Haptics::SetEnabled(bool), which has identical code
    ModelGroup::CameraInfo::SetUseLookAt(bool);

    // 0x100029ea0: the linker folded this into oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    ModelGroup::SupportsScrolling() const;

    // 0x1000c46d0: the linker folded this into oldscape::javapal::GameShell::GetClientType(), which has identical code
    ModelGroup::GetType() const;

    // 0x100536930, 656 bytes, placed by class name and debug map
    // ModelGroup::DecodeTypedComponentProperties(PacketT<Array<unsigned char, eastl::allocator> >&, int)
    void ModelGroup::DecodeTypedComponentProperties(PacketT* param_1, int param_2) {
        char cVar1;
        byte bVar2;
        ushort uVar3;
        int iVar4;
        int iVar5;
        uint uVar6;
        CameraInfo* this_00;
        undefined4 in_register_00000014;
        CameraInfo* this_01;
        undefined1 auVar7[12];
        CameraInfo local_158;
        Vector3T<int> local_68[16];
        CameraInfo* local_58;
        undefined1 local_50[12];
        uint local_38;
        int local_34;

        if (DecodeTypedComponentProperties(PacketT<Array<unsigned char, eastl::allocator>>&, int)::flipY == '\0') {
            iVar4 = ___cxa_guard_acquire(
                &DecodeTypedComponentProperties(PacketT<Array<unsigned char, eastl::allocator>>&, int)::flipY, param_1,
                CONCAT44(in_register_00000014, param_2));
            if (iVar4 != 0) {
                new (&DecodeTypedComponentProperties(PacketT<Array<unsigned char, eastl::allocator>>&, int)::flipY)
                    oldscape::rs2lib::worldmap::LocationData(1, -1, 1);
                ___cxa_guard_release(
                    &DecodeTypedComponentProperties(PacketT<Array<unsigned char, eastl::allocator>>&, int)::flipY);
            }
        }
        uVar3 = param_1->g2();
        local_34 = 0;
        if (uVar3 != 0) {
            local_38 = (uint)uVar3;
            this_01 = (CameraInfo*)((ModelGroup*)this)->field_592;
            local_58 = this_01;
            do {
                new (&local_158) CameraInfo();
                eastl::rbtree<int, eastl::pair<int const, ModelGroup::CameraInfo>, eastl::less<int>, eastl::allocator,
                              eastl::use_first<eastl::pair<int const, ModelGroup::CameraInfo>>, true,
                              true>::emplace<int&, ModelGroup::CameraInfo>((int*)local_50, this_01);
                local_158.~CameraInfo();
                this_00 = (CameraInfo*)
                    eastl::map<int, ModelGroup::CameraInfo, eastl::less<int>, eastl::allocator>::operator[](
                        (map<int, ModelGroup::CameraInfo, eastl::less<int>, eastl::allocator>*)this_01, &local_34);
                math::Vector3T<int>::Vector3T(local_68, param_1, false);
                auVar7 = math::operator*((Vector3T*)local_68,
                                         (Vector3T*)&DecodeTypedComponentProperties(
                                             PacketT<Array<unsigned char, eastl::allocator>>&, int)::flipY);
                local_50 = auVar7;
                math::Vector3T<float>::Vector3T<int>((Vector3T<float>*)&local_158, (Vector3T*)local_50);
                this_00->SetPosition((Vector3T*)&local_158, 0);
                cVar1 = param_1->g1();
                new (this_00) std::__cxx_atomic_base_impl<bool>(cVar1 != '\0');
                math::Vector3T<int>::Vector3T(local_68, param_1, false);
                auVar7 = math::operator*((Vector3T*)local_68,
                                         (Vector3T*)&DecodeTypedComponentProperties(
                                             PacketT<Array<unsigned char, eastl::allocator>>&, int)::flipY);
                local_50 = auVar7;
                math::Vector3T<float>::Vector3T<int>((Vector3T<float>*)&local_158, (Vector3T*)local_50);
                this_00->SetLookAt((Vector3T*)&local_158, 0);
                new (local_50) math::Vector3T<int>(param_1, false);
                math::Vector3T<float>::Vector3T<int>((Vector3T<float>*)&local_158, (Vector3T*)local_50);
                this_00->SetYawPitchRoll((Vector3T*)&local_158, 0);
                uVar3 = param_1->g2();
                this_00->SetFOV((float)uVar3, 0);
                iVar4 = param_1->g4();
                iVar5 = param_1->g4();
                this_01 = local_58;
                this_00->SetClipPlanes((float)iVar4, (float)iVar5);
                uVar6 = param_1->g4();
                math::Colour4FromA8R8G8B8(uVar6);
                CameraInfo::SetClearColour(this_00);
                cVar1 = param_1->g1();
                this_00->SetSortByComponentOrder(cVar1 != '\0');
                local_34 = local_34 + 1;
            } while (local_34 < (int)local_38);
        }
        bVar2 = param_1->g1();
        ((ModelGroup*)this)->field_584 = (uint)bVar2;
        ((ModelGroup*)this)->field_588 = -1;
    }

    // 0x100536e40, 144 bytes, placed by class name
    // ModelGroup::OnDeviceLost()
    void ModelGroup::OnDeviceLost() {
        long lVar1;
        bool bVar2;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        eastl local_30[8];
        hashtable_iterator_base local_28[8];

        eastl::vector<unsigned long,
                      eastl::fixed_vector_allocator<8ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::rbegin();
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        bVar2 = eastl::operator!=(local_30, local_28, extraout_RDX);
        if (bVar2) {
            do {
                lVar1 = eastl::rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                operator*(
                    (rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)local_30);
                ((lVar1 + 16))->ResetTextures();
                eastl::rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                operator++(
                    (rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)local_30);
                bVar2 = eastl::operator!=(local_30, local_28, extraout_RDX_00);
            } while (bVar2);
        }
    }

    // 0x100536ed0, 48 bytes, placed by class name
    // ModelGroup::CameraInfo::ResetTextures()
    void ModelGroup::CameraInfo::ResetTextures() {
        if ((&field_24)->operator_cast_to_bool()) {
            (&field_24, (Texture2D*)0)->reset();
        }
    }

    // 0x100536f20, 192 bytes, placed by class name
    // ModelGroup::UpdateCameraTransition()
    void ModelGroup::UpdateCameraTransition() {
        int* piVar1;
        undefined1* this_00;
        char cVar2;
        CameraInfo* pCVar3;

        if (-1 < field_588) {
            piVar1 = &field_588;
            this_00 = field_592;
            pCVar3 =
                (CameraInfo*)eastl::map<int, ModelGroup::CameraInfo, eastl::less<int>, eastl::allocator>::operator[](
                    (map<int, ModelGroup::CameraInfo, eastl::less<int>, eastl::allocator>*)this_00, piVar1);
            cVar2 = pCVar3->IsTransitioning();
            if (cVar2 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("m_cameras[m_pendingCameraIndex].IsTransitioning()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                          "iftype/components/ModelGroup.cpp",
                          58, (char*)0);
            }
            if (field_584 != -1) {
                pCVar3 = (CameraInfo*)
                    eastl::map<int, ModelGroup::CameraInfo, eastl::less<int>, eastl::allocator>::operator[](
                        (map<int, ModelGroup::CameraInfo, eastl::less<int>, eastl::allocator>*)this_00, piVar1);
                cVar2 = pCVar3->IsTransitionComplete();
                if (cVar2 == '\0') {
                    return;
                }
            }
            pCVar3 =
                (CameraInfo*)eastl::map<int, ModelGroup::CameraInfo, eastl::less<int>, eastl::allocator>::operator[](
                    (map<int, ModelGroup::CameraInfo, eastl::less<int>, eastl::allocator>*)this_00, piVar1);
            pCVar3->ClearTransition();
            field_584 = field_588;
            field_588 = -1;
        }
    }

    // 0x100537020, 32 bytes, placed by class name
    // ModelGroup::CameraInfo::ClearTransition()
    void ModelGroup::CameraInfo::ClearTransition() {
        field_32 = 0;
        field_40 = 0;
        field_8 = -1;
        (&field_24, (Texture2D*)0)->reset();
    }

    // 0x100537040, 288 bytes, placed by class name
    // ModelGroup::AddCamera()
    int ModelGroup::AddCamera() {
        bool bVar1;
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        CameraInfo local_138;
        hashtable_iterator_base local_48[20];
        int local_34;

        local_34 = 0;
        eastl::rbtree<int, eastl::pair<int const, ModelGroup::CameraInfo>, eastl::less<int>, eastl::allocator,
                      eastl::use_first<eastl::pair<int const, ModelGroup::CameraInfo>>, true,
                      true>::find((int*)&local_138);
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        bVar1 = eastl::operator!=((eastl*)&local_138, local_48, extraout_RDX);
        if (bVar1) {
            do {
                local_34 = local_34 + 1;
                eastl::rbtree<int, eastl::pair<int const, ModelGroup::CameraInfo>, eastl::less<int>, eastl::allocator,
                              eastl::use_first<eastl::pair<int const, ModelGroup::CameraInfo>>, true,
                              true>::find((int*)&local_138);
                eastl::rbtree<
                    unsigned int,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::less<unsigned int>, eastl::allocator,
                    eastl::use_first<eastl::pair<unsigned int const,
                                                 eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                    true, true>::end();
                bVar1 = eastl::operator!=((eastl*)&local_138, local_48, extraout_RDX_00);
            } while (bVar1);
        }
        new (&local_138) CameraInfo();
        eastl::rbtree<int, eastl::pair<int const, ModelGroup::CameraInfo>, eastl::less<int>, eastl::allocator,
                      eastl::use_first<eastl::pair<int const, ModelGroup::CameraInfo>>, true,
                      true>::emplace<int&, ModelGroup::CameraInfo>((int*)local_48, (CameraInfo*)field_592);
        local_138.~CameraInfo();
        lVar2 = field_592->capacity();
        if (lVar2 == 1) {
            SetActiveCamera(this, local_34, 0, 4294967295, 0);
        }
        return local_34;
    }

    // 0x100537240, 256 bytes, placed by class name
    // ModelGroup::SetActiveCamera(int, ModelGroup::TransitionType, int, unsigned int)
    void ModelGroup::SetActiveCamera(int param_1, int param_3, undefined4 param_4, undefined4 param_5) {
        int iVar1;
        CameraInfo* pCVar2;

        if (param_1 == -1) {
            if (-1 < field_588) {
                pCVar2 = (CameraInfo*)
                    eastl::map<int, ModelGroup::CameraInfo, eastl::less<int>, eastl::allocator>::operator[](
                        (map<int, ModelGroup::CameraInfo, eastl::less<int>, eastl::allocator>*)field_592, &field_588);
                pCVar2->ClearTransition();
                field_588 = -1;
            }
            field_584 = -1;
        } else {
            iVar1 = field_588;
            if (param_3 == 0) {
                if (-1 < iVar1) {
                    pCVar2 = (CameraInfo*)
                        eastl::map<int, ModelGroup::CameraInfo, eastl::less<int>, eastl::allocator>::operator[](
                            (map<int, ModelGroup::CameraInfo, eastl::less<int>, eastl::allocator>*)field_592,
                            &field_588);
                    pCVar2->ClearTransition();
                    field_588 = -1;
                }
                field_584 = param_1;
            } else if ((iVar1 != param_1) && ((field_584 != param_1 || (iVar1 != -1)))) {
                if (-1 < iVar1) {
                    field_584 = iVar1;
                }
                field_588 = param_1;
                pCVar2 = (CameraInfo*)
                    eastl::map<int, ModelGroup::CameraInfo, eastl::less<int>, eastl::allocator>::operator[](
                        (map<int, ModelGroup::CameraInfo, eastl::less<int>, eastl::allocator>*)field_592, &field_588);
                pCVar2->StartTransition(param_3, param_4, param_5);
            }
        }
    }

    // 0x100537340, 96 bytes, placed by class name
    // ModelGroup::DeleteCamera(int)
    void ModelGroup::DeleteCamera(int param_1) {
        int iVar1;
        int iVar2;

        eastl::map<int, ModelGroup::CameraInfo, eastl::less<int>, eastl::allocator>::erase((int*)field_592);
        iVar1 = field_584;
        iVar2 = field_588;
        if (iVar1 == param_1) {
            iVar1 = -1;
        }
        field_584 = iVar1;
        if (iVar2 == param_1) {
            iVar2 = -1;
        }
        field_588 = iVar2;
        UpdateCameraTransition(this);
    }

    // 0x100537420, 64 bytes, placed by class name
    // ModelGroup::CameraInfo::StartTransition(ModelGroup::TransitionType, int, unsigned int)
    void ModelGroup::CameraInfo::StartTransition(undefined4 param_2, int param_3, uint param_4) {
        long lVar1;

        field_4 = param_2;
        if (field_8 != param_3) {
            field_8 = param_3;
            (&field_24, (Texture2D*)0)->reset();
        }
        lVar1 = FrameTime::GetCurrentTimeMS();
        field_32 = lVar1;
        field_40 = (ulong)param_4 + lVar1;
    }

    // 0x1005374b0, 272 bytes, base-object constructor, placed by class name
    // ModelGroup::CameraInfo::CameraInfo(ModelGroup::CameraInfo&&)
    void ModelGroup::CameraInfo::CameraInfo(CameraInfo* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;

        field_0 = param_1->field_0;
        m_sortByComponentOrder = param_1->m_sortByComponentOrder;
        field_4 = param_1->field_4;
        field_8 = param_1->field_8;
        m_clipPlanes = param_1->m_clipPlanes;
        field_16 = param_1->field_16;
        std::unique_ptr<render::Texture2D, std::default_delete<render::Texture2D>>::unique_ptr<true, void>(
            (unique_ptr<render::Texture2D, std::default_delete<render::Texture2D>>*)&field_24);
        field_32 = param_1->field_32;
        field_40 = param_1->field_40;
        uVar1 = param_1->field_56;
        field_48 = param_1->field_48;
        field_56 = uVar1;
        uVar1 = param_1->field_64;
        uVar2 = param_1->field_72;
        uVar3 = param_1->field_88;
        field_80 = param_1->field_80;
        field_88 = uVar3;
        field_64 = uVar1;
        field_72 = uVar2;
        uVar1 = param_1->field_96;
        uVar2 = param_1->field_104;
        uVar3 = param_1->field_112;
        uVar4 = param_1->field_120;
        uVar5 = param_1->field_136;
        field_128 = param_1->field_128;
        field_136 = uVar5;
        field_112 = uVar3;
        field_120 = uVar4;
        field_96 = uVar1;
        field_104 = uVar2;
        uVar1 = param_1->field_144;
        uVar2 = param_1->field_152;
        uVar3 = param_1->field_168;
        uVar4 = param_1->field_176;
        uVar5 = param_1->field_184;
        field_160 = param_1->field_160;
        field_168 = uVar3;
        field_144 = uVar1;
        field_152 = uVar2;
        field_176 = uVar4;
        field_184 = uVar5;
        uVar1 = param_1->field_192;
        uVar2 = param_1->field_200;
        uVar3 = param_1->field_216;
        uVar4 = param_1->field_224;
        uVar5 = param_1->field_232;
        field_208 = param_1->field_208;
        field_216 = uVar3;
        field_224 = uVar4;
        field_232 = uVar5;
        field_192 = uVar1;
        field_200 = uVar2;
        eastl::swap<std::unique_ptr<render::Texture2D, std::default_delete<render::Texture2D>>>(
            (unique_ptr*)&field_24, (unique_ptr*)&param_1->field_24);
    }

    // 0x100537630, 16 bytes, complete-object constructor, placed by class name
    // ModelGroup::CameraInfo::CameraInfo(ModelGroup::CameraInfo&&): jumps straight to the base-object constructor

    // 0x100537640, 160 bytes, placed by class name
    // ModelGroup::CameraInfo::GetTransitionRatio() const
    float ModelGroup::CameraInfo::GetTransitionRatio() {
        long lVar2;
        float local_1c;
        float local_18;
        float local_14;

        if (IsTransitioning(this) == '\0') {
            return 1.0;
        }
        lVar2 = FrameTime::GetCurrentTimeMS();
        local_1c = (float)(ulong)(lVar2 - field_32) / (float)(field_40 - field_32);
        local_18 = 0.0;
        local_14 = 1.0;
        return math::Clamp<float>(&local_1c, &local_18, &local_14);
    }

    // 0x1005376e0, 560 bytes, placed by class name
    // ModelGroup::CameraInfo::GetTransitionMaskTexture(Js5ResourceProvider&)
    undefined1* ModelGroup::CameraInfo::GetTransitionMaskTexture(Js5ResourceProvider* param_1) {
        undefined1* this_00;
        int iVar1;
        bool bVar2;
        undefined* puVar3;
        uchar* puVar4;
        Texture2D* this_01;
        long* plVar5;
        long lVar6;
        Singleton<render::BuiltinStates>* this_02;
        undefined1 local_110[104];
        ResourceDataT<unsigned char const> local_a8[24];
        unique_ptr local_90[8];
        RGBAImage local_88;
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        iVar1 = field_8;
        this_00 = &field_24;
        bVar2 = this_00->operator_cast_to_bool();
        if (iVar1 < 0) {
            if (bVar2) {
                /* WARNING: Subroutine does not return */
                LogAssert("!m_transitionMaskTexture",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                          "iftype/components/ModelGroup.cpp",
                          235, (char*)0);
            }
        } else if (!bVar2) {
            new ((local_110 + 64)) PacketView();
            puVar3 = (undefined*)param_1->GetFile((PacketView*)(local_110 + 64), Js5Archive::JS5_SPRITES, field_8, 0,
                                                  (Priority*)Priority::HIGHEST, true, false, true);
            if (puVar3 == DataStatus::READY) {
                new (&local_88) RGBAImage();
                RAWDecoder::LoadSingle(&local_88, (PacketView*)(local_110 + 64));
                puVar4 = (uchar*)local_88.GetColourDataPtr();
                render::ResourceDataT<unsigned char const>::ResourceDataT(local_a8, puVar4, 0, 0, false);
                new (local_110) render::Texture::Desc();
                local_110._0_4_ = local_88.GetX();
                local_110._4_4_ = local_88.GetZ();
                local_110[32] = 0;
                local_110._12_4_ = 7;
                std::make_unique<render::Texture2D, char const(&)[30]>((char*)local_90);
                std::unique_ptr<render::Texture2D, std::default_delete<render::Texture2D>>::operator=(
                    (unique_ptr<render::Texture2D, std::default_delete<render::Texture2D>>*)this_00, local_90);
                local_90->~unique_ptr();
                this_01 =
                    (Texture2D*)std::unique_ptr<render::Texture2D, std::default_delete<render::Texture2D>>::operator->(
                        (unique_ptr<render::Texture2D, std::default_delete<render::Texture2D>>*)this_00);
                this_01->Create(local_110, local_a8, 0);
                this_02 = (Singleton<render::BuiltinStates>*)this_00;
                plVar5 = (long*)std::unique_ptr<render::Texture2D, std::default_delete<render::Texture2D>>::operator->(
                    (unique_ptr<render::Texture2D, std::default_delete<render::Texture2D>>*)this_00);
                lVar6 = this_02->Instance();
                (**(code**)(*plVar5 + 24))(plVar5, lVar6 + 208, 1);
                local_a8->~ResourceDataT();
                local_88.~RGBAImage();
            }
            ((local_110 + 64))->~PacketView();
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return this_00;
    }

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    ModelGroup::~ModelGroup();

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    ModelGroup::~ModelGroup();

} // namespace jag::game
