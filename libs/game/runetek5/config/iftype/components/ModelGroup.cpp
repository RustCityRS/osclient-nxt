// libs/game/runetek5/config/iftype/components/ModelGroup.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "ModelGroup.h"

namespace jag::game {
    // 0x100f3ca70
    float ModelGroup::CameraInfo::DEFAULT_CLIP_PLANE_NEAR = 10.0f;

    // 0x100f3ca74
    float ModelGroup::CameraInfo::DEFAULT_CLIP_PLANE_FAR = 10000.0f;

    // 0x100f3ca78
    float ModelGroup::CameraInfo::DEFAULT_FOV = 90.0f;

    // 0x100009e70: ModelGroup::SetScrollPos(int, int) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: ModelGroup::SetScrollSize(int, int) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100023b60: ModelGroup::CameraInfo::SetUseLookAt(bool) has the same machine code as hal::Haptics::SetEnabled(bool)

    // 0x100029ea0: ModelGroup::SupportsScrolling() const has the same machine code as oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x1000c46d0: ModelGroup::GetType() const has the same machine code as oldscape::javapal::GameShell::GetClientType()

    // 0x100536930
    void ModelGroup::DecodeTypedComponentProperties(PacketT<Array<unsigned char>>& arg1, int arg2) {
        bool cVar1;
        int iVar4;
        int iVar5;
        CameraInfo* this_00;
        uint32_t in_register_00000014;
        rbtree<int, eastl::pair<int const, ModelGroup::CameraInfo>, eastl::less<int>, eastl::allocator,
               eastl::use_first<eastl::pair<int const, ModelGroup::CameraInfo>>, true, true>* this_01;
        uint8_t auVar6[12];
        CameraInfo local_158;
        Vector3T<int> local_68;
        rbtree<int, eastl::pair<int const, ModelGroup::CameraInfo>, eastl::less<int>, eastl::allocator,
               eastl::use_first<eastl::pair<int const, ModelGroup::CameraInfo>>, true, true>* local_58;
        uint8_t local_50[12];
        unsigned int local_38;

        ModelGroup* local_40 = this;
        if (DecodeTypedComponentProperties(PacketT<Array<unsigned char>>&, int)::flipY == '\0') {
            iVar4 = ___cxa_guard_acquire(&DecodeTypedComponentProperties(PacketT<Array<unsigned char>>&, int)::flipY,
                                         arg1, (((uint64_t)in_register_00000014 << 32) | (uint32_t)arg2));
            if (iVar4 != 0) {
                new ((LocationData*)&DecodeTypedComponentProperties(PacketT<Array<unsigned char>>&, int)::flipY)
                    oldscape::rs2lib::worldmap::LocationData(1, 4294967295, 1);
                ___cxa_guard_release(&DecodeTypedComponentProperties(PacketT<Array<unsigned char>>&, int)::flipY);
            }
        }
        unsigned short uVar3 = arg1.g2();
        int local_34 = 0;
        if (uVar3 != 0) {
            local_38 = (unsigned int)uVar3;
            this_01 = (rbtree<int, eastl::pair<int const, ModelGroup::CameraInfo>, eastl::less<int>, eastl::allocator,
                              eastl::use_first<eastl::pair<int const, ModelGroup::CameraInfo>>, true, true>*)&local_40
                          ->field_592;
            local_58 = this_01;
            do {
                local_158 = CameraInfo();
                *local_50 = this_01->emplace<int&, ModelGroup::CameraInfo>(local_34, local_158);
                this_00 = (CameraInfo*)(*this_01)[local_34];
                local_68 = math::Vector3T(arg1, false);
                auVar6 =
                    local_68 *
                    (*((Vector3T<int>*)&DecodeTypedComponentProperties(PacketT<Array<unsigned char>>&, int)::flipY));
                local_50 = auVar6;
                local_158.Vector3T<int>(*local_50);
                this_00->SetPosition(local_158, 0);
                cVar1 = arg1.g1();
                new (this_00) std::__cxx_atomic_base_impl(cVar1);
                local_68 = math::Vector3T(arg1, false);
                auVar6 =
                    local_68 *
                    (*((Vector3T<int>*)&DecodeTypedComponentProperties(PacketT<Array<unsigned char>>&, int)::flipY));
                local_50 = auVar6;
                local_158.Vector3T<int>(*local_50);
                this_00->SetLookAt(local_158, 0);
                new (local_50) math::Vector3T(arg1, false);
                local_158.Vector3T<int>(*local_50);
                this_00->SetYawPitchRoll(local_158, 0);
                uVar3 = arg1.g2();
                this_00->SetFOV((float)uVar3, 0);
                iVar4 = arg1.g4();
                iVar5 = arg1.g4();
                this_01 = local_58;
                this_00->SetClipPlanes((float)iVar4, (float)iVar5);
                math::Colour4FromA8R8G8B8(arg1.g4());
                CameraInfo::SetClearColour(this_00);
                cVar1 = arg1.g1();
                this_00->SetSortByComponentOrder(cVar1);
                local_34 = local_34 + 1;
            } while (local_34 < (int)local_38);
        }
        uint8_t bVar2 = arg1.g1();
        local_40->field_584 = (unsigned int)bVar2;
        local_40->field_588 = -1;
    }

    // 0x100536e40
    void ModelGroup::OnDeviceLost() {
        long lVar2;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_28;

        auto local_30 = field_592.rbegin();
        local_28.end();
        bool cVar1 = local_30 != local_28;
        if (cVar1) {
            do {
                lVar2 = *local_30;
                ((lVar2 + 16))->ResetTextures();
                ++local_30;
                cVar1 = local_30 != local_28;
            } while (cVar1);
        }
    }

    // 0x100536ed0
    void ModelGroup::CameraInfo::ResetTextures() {
        if ((&field_24)->operator_cast_to_bool() != '\0') {
            field_24.reset(nullptr);
        }
    }

    // 0x100536f20
    void ModelGroup::UpdateCameraTransition() {
        int* arg1;
        uint8_t* this_00;
        CameraInfo* pCVar2;

        if (-1 < field_588) {
            arg1 = &field_588;
            this_00 = &field_592;
            pCVar2 = (CameraInfo*)(*this_00)[*arg1];
            if (!(pCVar2->IsTransitioning())) {
                LogAssert("m_cameras[m_pendingCameraIndex].IsTransitioning()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                          "iftype/components/ModelGroup.cpp",
                          58, nullptr);
            }
            if (field_584 != -1) {
                pCVar2 = (CameraInfo*)(*this_00)[*arg1];
                if (!(pCVar2->IsTransitionComplete())) {
                    return;
                }
            }
            pCVar2 = (CameraInfo*)(*this_00)[*arg1];
            pCVar2->ClearTransition();
            field_584 = field_588;
            field_588 = -1;
        }
    }

    // 0x100537020
    void ModelGroup::CameraInfo::ClearTransition() {
        field_32 = 0;
        field_40 = 0;
        field_8 = -1;
        field_24.reset(nullptr);
    }

    // 0x100537040
    int ModelGroup::AddCamera() {
        uint8_t* this_00 = &field_592;
        return local_34 = 0;
        CameraInfo local_138 = this_00->find(local_34);
        local_48.end();
        bool cVar1 = local_138 != local_48;
        if (cVar1) {
            do {
                local_34 = local_34 + 1;
                local_138 = this_00->find(local_34);
                local_48.end();
                cVar1 = local_138 != local_48;
            } while (cVar1);
        }
        local_138 = CameraInfo();
        auto local_48 = this_00->emplace<int&, ModelGroup::CameraInfo>(local_34, local_138);
        if (this_00->capacity() == 1) {
            SetActiveCamera(local_34, 0, -1, 0);
        }
        return local_34;
    }

    // 0x100537240
    void ModelGroup::SetActiveCamera(int arg1, ModelGroup::TransitionType transitionType, int arg3, unsigned int arg4) {
        int iVar1;
        CameraInfo* pCVar2;

        if (arg1 == -1) {
            if (-1 < field_588) {
                pCVar2 = &field_592[field_588];
                pCVar2->ClearTransition();
                field_588 = -1;
            }
            field_584 = -1;
        } else {
            iVar1 = field_588;
            if (transitionType == 0) {
                if (-1 < iVar1) {
                    pCVar2 = &field_592[field_588];
                    pCVar2->ClearTransition();
                    field_588 = -1;
                }
                field_584 = arg1;
            } else if ((iVar1 != arg1) && ((field_584 != arg1 || (iVar1 != -1)))) {
                if (-1 < iVar1) {
                    field_584 = iVar1;
                }
                field_588 = arg1;
                pCVar2 = &field_592[field_588];
                pCVar2->StartTransition(transitionType, arg3, arg4);
            }
        }
    }

    // 0x100537340
    void ModelGroup::DeleteCamera(int arg1) {
        field_592.erase(arg1);
        int iVar1 = field_584;
        int iVar2 = field_588;
        if (iVar1 == arg1) {
            iVar1 = -1;
        }
        field_584 = iVar1;
        if (iVar2 == arg1) {
            iVar2 = -1;
        }
        field_588 = iVar2;
        UpdateCameraTransition();
    }

    // 0x100537420
    void ModelGroup::CameraInfo::StartTransition(ModelGroup::TransitionType transitionType, int arg2,
                                                 unsigned int arg3) {
        field_4 = transitionType;
        if (field_8 != arg2) {
            field_8 = arg2;
            field_24.reset(nullptr);
        }
        long lVar1 = FrameTime::GetCurrentTimeMS();
        field_32 = lVar1;
        field_40 = (unsigned long)arg3 + lVar1;
    }

    // 0x1005374b0
    ModelGroup::CameraInfo::CameraInfo(ModelGroup::CameraInfo&& cameraInfo)
        : field_0(cameraInfo.field_0), m_sortByComponentOrder(cameraInfo.m_sortByComponentOrder),
          field_4(cameraInfo.field_4), field_8(cameraInfo.field_8), m_clipPlanes(cameraInfo.m_clipPlanes),
          field_16(cameraInfo.field_16) {
        field_24.unique_ptr<true, void>();
        field_32 = cameraInfo.field_32;
        field_40 = cameraInfo.field_40;
        uint64_t uVar1 = cameraInfo.field_56;
        field_48 = cameraInfo.field_48;
        field_56 = uVar1;
        uVar1 = cameraInfo.field_64;
        uint64_t uVar2 = cameraInfo.field_72;
        uint64_t uVar3 = cameraInfo.field_88;
        field_80 = cameraInfo.field_80;
        field_88 = uVar3;
        field_64 = uVar1;
        field_72 = uVar2;
        uVar1 = cameraInfo.field_96;
        uVar2 = cameraInfo.field_104;
        uVar3 = cameraInfo.field_112;
        uint64_t uVar4 = cameraInfo.field_120;
        uint64_t uVar5 = cameraInfo.field_136;
        field_128 = cameraInfo.field_128;
        field_136 = uVar5;
        field_112 = uVar3;
        field_120 = uVar4;
        field_96 = uVar1;
        field_104 = uVar2;
        uVar1 = cameraInfo.field_144;
        uVar2 = cameraInfo.field_152;
        uVar3 = cameraInfo.field_168;
        uVar4 = cameraInfo.field_176;
        uVar5 = cameraInfo.field_184;
        field_160 = cameraInfo.field_160;
        field_168 = uVar3;
        field_144 = uVar1;
        field_152 = uVar2;
        field_176 = uVar4;
        field_184 = uVar5;
        uVar1 = cameraInfo.field_192;
        uVar2 = cameraInfo.field_200;
        uVar3 = cameraInfo.field_216;
        uVar4 = cameraInfo.field_224;
        uVar5 = cameraInfo.field_232;
        field_208 = cameraInfo.field_208;
        field_216 = uVar3;
        field_224 = uVar4;
        field_232 = uVar5;
        field_192 = uVar1;
        field_200 = uVar2;
        eastl::swap<std::unique_ptr<render::Texture2D>>(field_24, cameraInfo.field_24);
    }

    // 0x100537640
    float ModelGroup::CameraInfo::GetTransitionRatio() const {
        if (IsTransitioning() == '\0') {
            return 1.0;
        }
        long lVar2 = FrameTime::GetCurrentTimeMS();
        float local_1c = (float)(unsigned long)(lVar2 - field_32) / (float)(field_40 - field_32);
        return math::Clamp<float>(local_1c, 0.0, 1.0);
    }

    // 0x1005376e0
    uint8_t* ModelGroup::CameraInfo::GetTransitionMaskTexture(Js5ResourceProvider& js5ResourceProvider) {
        unsigned char* arg1;
        long* plVar4;
        long lVar5;
        Singleton<render::BuiltinStates>* this_02;
        uint8_t local_110[104];
        ResourceDataT<unsigned char const> local_a8;
        unique_ptr<render::Texture2D, std::default_delete<render::Texture2D> _> local_90;
        RGBAImage local_88;

        int iVar1 = field_8;
        uint8_t* this_00 = &field_24;
        bool cVar2 = this_00->operator_cast_to_bool();
        if (iVar1 < 0) {
            if (cVar2) {
                LogAssert("!m_transitionMaskTexture",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                          "iftype/components/ModelGroup.cpp",
                          235, nullptr);
            }
        } else if (!cVar2) {
            new ((local_110 + 64)) PacketView();
            if ((uint8_t*)js5ResourceProvider.GetFile(*((local_110 + 64)), *(Js5Archive::JS5_SPRITES), field_8, 0,
                                                      (Priority*)Priority::HIGHEST, true, false,
                                                      true) == DataStatus::READY) {
                local_88 = RGBAImage();
                RAWDecoder::LoadSingle(local_88, *((local_110 + 64)));
                arg1 = (unsigned char*)local_88.GetColourDataPtr();
                local_a8 = render::ResourceDataT(arg1, 0, 0, false);
                new (local_110) render::Texture::Desc();
                local_110._0_4_ = local_88.GetX();
                local_110._4_4_ = local_88.GetZ();
                local_110[32] = 0;
                local_110._12_4_ = 7;
                std::make_unique<render::Texture2D, char const(&)[30]>(&local_90);
                *this_00 = local_90;
                ((Texture2D*)(*this_00).operator->())->Create(*local_110, &local_a8, 0);
                this_02 = (Singleton<render::BuiltinStates>*)this_00;
                plVar4 = (long*)(*this_00).operator->();
                lVar5 = this_02->Instance();
                (**(void (**)(...))(*plVar4 + 24))(plVar4, lVar5 + 208, 1);
            }
            ((local_110 + 64))->~PacketView();
        }
        return this_00;
    }

    // 0x100c92b50: ModelGroup::~ModelGroup() has the same machine code as InlineFatalBreak()

} // namespace jag::game
