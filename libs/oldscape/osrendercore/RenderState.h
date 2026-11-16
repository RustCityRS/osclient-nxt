// libs/oldscape/osrendercore/RenderState.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.oldscape.osrendercore

namespace jag {
    class RenderState {
    public:
        class CameraPos;
        class LightSubmissionRSeven;
        class ModelSubmissionRSeven;
        class OverlayRSeven;
        class OverlayViewportState;
        class RSevenOptions;
        class WindowProperties;
        class WindowSetOptions;
        RenderState();
        ~RenderState();

    private:
        uint64_t field_0;
        uint8_t _unknown_8[24];
        uint32_t field_32;
        uint8_t _unknown_36[17563796];
        uint32_t field_17563832;
        uint8_t _unknown_17563836[4];
        uint64_t field_17563840;
        uint8_t _unknown_17563848[2113656];
        uint16_t field_19677504;
        uint8_t _unknown_19677506[2];
        WindowSetOptions field_19677508;
        WindowProperties field_19677552;
    };

    class RenderState::CameraPos {
    public:
        void Set(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6);
    };

    class RenderState::LightSubmissionRSeven {
    public:
        LightSubmissionRSeven();

        uint8_t _unknown_0[1];
    };

    class RenderState::ModelSubmissionRSeven {
    public:
        ModelSubmissionRSeven();
        ~ModelSubmissionRSeven();

    private:
        uint8_t _unknown_0[16];
        ResolvedModel field_16;
        uint8_t _unknown_128[38];
        EntityHighlight field_166;
    };

    class RenderState::OverlayRSeven {
    public:
        ~OverlayRSeven();
        OverlayRSeven(OverlayRSeven&& overlayRSeven);
        OverlayRSeven();
        OverlayRSeven(const OverlayRSeven& overlayRSeven);

    private:
        uint8_t _unknown_0[16];
        OverlayViewportState field_16;
    };

    class RenderState::OverlayViewportState {
    public:
        OverlayViewportState* operator=(const OverlayViewportState& overlayViewportState);
        OverlayViewportState(OverlayViewportState&& overlayViewportState);
        OverlayViewportState(const OverlayViewportState& overlayViewportState);
        OverlayViewportState();

    private:
        uint32_t field_0;
        uint32_t field_4;
        uint32_t field_8;
        uint32_t field_12;
        uint64_t field_16;
        uint32_t field_24;
        uint8_t _unknown_28[4];
    };

    class RenderState::RSevenOptions {
    public:
        RSevenOptions* operator=(const RSevenOptions& rSevenOptions);
        RSevenOptions();
        ~RSevenOptions();

    private:
        uint64_t field_0;
        uint64_t field_8;
        uint8_t field_16;
        uint8_t _unknown_17[7];
        uint8_t field_24;
        uint8_t _unknown_25[623];
        uint64_t field_648;
        uint64_t field_656;
        uint64_t field_664;
        uint64_t field_672;
        uint64_t field_680;
        uint64_t field_688;
        uint8_t _unknown_696[168];
        uint32_t field_864;
        SunlightOptions field_868;
        uint16_t field_932;
        uint8_t _unknown_934[6];
    };

    class RenderState::WindowProperties {
    public:
        auto GetWindowFrame(const WindowSetOptions& windowSetOptions) const;
        auto GetClientRect(const WindowSetOptions& windowSetOptions) const;
        void GetRightMostScreenPointForWindowExpansion(const WindowSetOptions& windowSetOptions) const;
        uint8_t GetIsMaximized() const;
        uint64_t GetIsFullScreen(const WindowSetOptions& windowSetOptions) const;
        bool IsEmpty() const;
        WindowProperties* GetMonitorWithLargestWindowPortion(const math::Rect<int>& rect) const;
        WindowProperties();
        bool operator==(const WindowProperties& windowProperties) const;
        ~WindowProperties();
        void OverrideWithSetOptions(const WindowSetOptions& windowSetOptions);

    private:
        long field_0;
        long field_8;
        uint8_t _unknown_16[232];
        uint8_t m_isMaximized;
        uint8_t field_249;
        uint8_t _unknown_250[26110];
    };

    class RenderState::WindowSetOptions {
    public:
        WindowSetOptions();

    private:
        uint8_t _unknown_0[25];
        uint8_t field_25;
        uint8_t _unknown_26[6];
        uint8_t field_32;
        uint8_t _unknown_33[3];
        uint32_t field_36;
        uint8_t _unknown_40[4];
    };

    // 0x1000dc2a0
    auto RenderState::WindowProperties::GetWindowFrame(const RenderState::WindowSetOptions& windowSetOptions) const {
        uint8_t* this_00;
        uint8_t bVar1;
        int iVar2;
        int iVar3;
        uint32_t uVar4;
        int iVar5;
        int iVar6;
        int* piVar7;
        uint32_t* puVar8;
        uint8_t local_48[16];

        auto result(field_216);
        if ((*(uint8_t*)&windowSetOptions.field_36 & 1) == 0) {
            bVar1 = *(uint8_t*)&windowSetOptions.field_36;
        } else {
            piVar7 = result.second();
            iVar2 = *piVar7;
            this_00 = &field_232;
            iVar5 = this_00->GetPos();
            piVar7 = result.qw();
            this = this;
            iVar3 = *piVar7;
            iVar6 = this_00->GetLevel();
            new (&result) oldscape::ServerConnectionWorkItem((iVar2 - iVar5) + *(int*)&windowSetOptions.field_8);
            result.SetLevel((iVar3 - iVar6) + *(int*)&windowSetOptions.field_12);
            bVar1 = *(uint8_t*)&windowSetOptions.field_36;
        }
        if ((bVar1 & 32) == 0) {
            bVar1 = *(uint8_t*)&windowSetOptions.field_36;
        } else {
            uVar4 = *(uint32_t*)&windowSetOptions.field_16;
            puVar8 = (uint32_t*)result.SSOBeginPtr();
            *puVar8 = uVar4;
            uVar4 = *(uint32_t*)&windowSetOptions.field_20;
            puVar8 = result.y();
            *puVar8 = uVar4;
            bVar1 = *(uint8_t*)&windowSetOptions.field_36;
        }
        if (((bVar1 & 16) != 0) && (windowSetOptions.field_26 != '\0')) {
            GetMonitorWithLargestWindowPortion((WindowProperties*)local_48, (Rect<int>*)this);
            result = *local_48;
        }
        return result;
    }

    // 0x1000dc3a0
    auto RenderState::WindowProperties::GetClientRect(const RenderState::WindowSetOptions& windowSetOptions) const {
        int* piVar1;
        uint8_t local_48[16];
        uint8_t local_38[16];

        auto result(field_232);
        if ((*(uint8_t*)&windowSetOptions.field_36 & 1) != 0) {
            new (&result) oldscape::ServerConnectionWorkItem(*(int*)&windowSetOptions.field_8);
            result.SetLevel(*(int*)&windowSetOptions.field_12);
        }
        if (((*(uint8_t*)&windowSetOptions.field_36 & 16) != 0) && (windowSetOptions.field_26 != '\0')) {
            GetWindowFrame((StockPlayerOffer*)local_38, this, windowSetOptions);
            GetMonitorWithLargestWindowPortion((WindowProperties*)local_48, (Rect<int>*)this);
            piVar1 = (int*)local_48->second();
            new (&result) oldscape::ServerConnectionWorkItem(*piVar1);
            piVar1 = (int*)local_48->qw();
            result.SetLevel(*piVar1);
        }
        return result;
    }

    // 0x1000dc450
    void RenderState::WindowProperties::GetRightMostScreenPointForWindowExpansion(
        const RenderState::WindowSetOptions& windowSetOptions) const {
        void result;
        uint8_t result;
        uint32_t uVar1;
        bool bVar2;
        int iVar4;
        int iVar5;
        uint32_t* puVar6;
        long lVar7;
        unsigned long uVar8;
        Rect<int>* rect;
        int* piVar9;
        unsigned long uVar10;
        Rect<unsigned int> local_98;
        Margin local_88;
        Layout local_68;
        Rect<unsigned int> local_58;
        Rect<unsigned int> local_48;

        &result = &local_88.field_16;
        GetWindowFrame(&result, this, windowSetOptions);
        GetMonitorWithLargestWindowPortion(&local_68, (Rect<int>*)this);
        bool cVar3 = GetIsFullScreen(windowSetOptions);
        WindowProperties* this_00 = &local_68;
        if (!cVar3) {
            cVar3 = GetIsMaximized();
            if (!cVar3) {
                puVar6 = (uint32_t*)local_68.SSOBeginPtr();
                uVar1 = *puVar6;
                puVar6 = (uint32_t*)result.SSOBeginPtr();
                *puVar6 = uVar1;
                iVar4 = local_68.Right();
                result.SetRight(iVar4);
                lVar7 = size();
                this_00 = &result;
                if (lVar7 != 0) {
                    this_00 = (WindowProperties*)&local_88.field_16;
                    uVar8 = 0;
                    uVar10 = 1;
                    do {
                        rect = (Rect<int>*)(*this)[uVar8];
                        local_98 = math::Rect(*rect);
                        piVar9 = (int*)local_98.SSOBeginPtr();
                        iVar4 = *piVar9;
                        piVar9 = (int*)this_00->SSOBeginPtr();
                        if (iVar4 < *piVar9) {
                            local_48 = math::Rect(*this_00);
                            puVar6 = (uint32_t*)local_98.SSOBeginPtr();
                            uVar1 = *puVar6;
                            puVar6 = (uint32_t*)local_48.SSOBeginPtr();
                            *puVar6 = uVar1;
                            cVar3 = local_98.Intersects(local_48);
                            if (cVar3) {
                                iVar5 = this_00->Right();
                                piVar9 = (int*)this_00->SSOBeginPtr();
                                iVar4 = *piVar9;
                                piVar9 = (int*)local_98.SSOBeginPtr();
                                this_00->SetRight((iVar5 + iVar4) - *piVar9);
                                puVar6 = (uint32_t*)local_48.SSOBeginPtr();
                                uVar1 = *puVar6;
                                puVar6 = (uint32_t*)this_00->SSOBeginPtr();
                                *puVar6 = uVar1;
                            }
                        }
                        iVar4 = local_98.Right();
                        iVar5 = this_00->Right();
                        this = this;
                        if (iVar5 < iVar4) {
                            local_48 = math::Rect(*this_00);
                            iVar4 = local_98.Right();
                            local_48.SetRight(iVar4);
                            cVar3 = local_98.Intersects(local_48);
                            if (cVar3) {
                                local_58 = math::Rect(local_48);
                                local_88 = local_98.Intersection(&local_58);
                                iVar4 = local_48.Right();
                                this_00->SetRight(iVar4);
                            }
                        }
                        uVar8 = size();
                        bVar2 = uVar10 < uVar8;
                        uVar8 = uVar10;
                        uVar10 = (unsigned long)((int)uVar10 + 1);
                    } while (bVar2);
                }
            }
        }
        this_00->Right();
    }

    // 0x1000dcc30
    uint8_t RenderState::WindowProperties::GetIsMaximized() const {
        return m_isMaximized;
    }

    // 0x1000dcc40
    uint64_t
    RenderState::WindowProperties::GetIsFullScreen(const RenderState::WindowSetOptions& windowSetOptions) const {
        uint8_t* puVar1 = &windowSetOptions.field_26;
        if ((*(uint8_t*)&windowSetOptions.field_36 & 16) == 0) {
            puVar1 = &field_249;
        }
        return *puVar1;
    }

    // 0x10011f3f0
    bool RenderState::WindowProperties::IsEmpty() const {
        long local_128[33];

        local_128[30] = 0;
        local_128[31]._0_1_ = 0;
        local_128[31]._1_1_ = 0;
        local_128[31]._2_6_ = 0;
        local_128[28] = 0;
        local_128[29] = 0;
        local_128[26] = 0;
        local_128[27] = 0;
        local_128[24] = 0;
        local_128[25] = 0;
        local_128[22] = 0;
        local_128[23] = 0;
        local_128[20] = 0;
        local_128[21] = 0;
        local_128[18] = 0;
        local_128[19] = 0;
        local_128[16] = 0;
        local_128[17] = 0;
        local_128[14] = 0;
        local_128[15] = 0;
        local_128[12] = 0;
        local_128[13] = 0;
        local_128[10] = 0;
        local_128[11] = 0;
        local_128[8] = 0;
        local_128[9] = 0;
        local_128[6] = 0;
        local_128[7] = 0;
        local_128[4] = 0;
        local_128[5] = 0;
        local_128[2] = 0;
        local_128[3] = 0;
        local_128[0] = 0;
        local_128[1] = 0;
        WindowProperties((WindowProperties*)local_128);
        uint32_t uVar1 = *local_128 == *this;
        ~WindowProperties((WindowProperties*)local_128);
        return uVar1;
    }

    // 0x10012c730
    WindowProperties*
    RenderState::WindowProperties::GetMonitorWithLargestWindowPortion(const math::Rect<int>& rect) const {
        int iVar1;
        int iVar2;
        unsigned long uVar5;
        int* piVar6;
        Rect<int>* in_RDX;
        unsigned int uVar7;
        unsigned long arg1;
        uint8_t local_78[32];
        Rect<unsigned int> local_58;
        int local_34;

        Rect<int>* local_48 = in_RDX;
        Rect<int>* pRVar3 = &rect[0];
        new (this) math::Rect(*pRVar3);
        if (rect.size() != 0) {
            local_34 = -2147483648;
            uVar7 = 1;
            arg1 = 0;
            do {
                pRVar3 = &rect[arg1];
                local_58 = math::Rect(*pRVar3);
                new ((local_78 + 16)) math::Rect(*local_48);
                *local_78 = local_58.Intersection((local_78 + 16));
                piVar6 = (int*)local_78->second();
                iVar1 = *piVar6;
                piVar6 = (int*)local_78->qw();
                iVar2 = *piVar6;
                if (local_34 < iVar1 * iVar2) {
                    *this = local_58;
                    local_34 = iVar1 * iVar2;
                }
                arg1 = (unsigned long)uVar7;
                uVar5 = rect.size();
                uVar7 = uVar7 + 1;
            } while (arg1 < uVar5);
        }
        return this;
    }

    // 0x10012d160: RenderState::OverlayRSeven::~OverlayRSeven() has the same machine code as oldscape::FoundObject::~FoundObject()

    // 0x10012dc10
    void RenderState::CameraPos::Set(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6) {
        field_0 = arg1;
        m_param = arg2;
        m_expiryTime = arg3;
        field_12 = arg4;
        field_16 = arg5;
        field_20 = arg6;
    }

    // 0x1001313c0
    bool RenderState::WindowProperties::operator==(const RenderState::WindowProperties& windowProperties) const {
        bool cVar1;

        if ((((field_249 == windowProperties.field_249) && (m_isMaximized == windowProperties.m_isMaximized)) &&
             (cVar1 = field_232 == windowProperties.field_232, cVar1)) &&
            (cVar1 = field_216 == windowProperties.field_216, cVar1)) {
            return *this == windowProperties;
        }
        return false;
    }

    // 0x100131440
    RenderState::WindowProperties::WindowProperties()
        : eastl::fixed_vector<math::Rect<int>, 12ul, false, eastl::dummy_allocator>() {
        new (&field_216) shared_ptr();
        new (&field_232) shared_ptr();
        m_isMaximized = 0;
        field_249 = 0;
    }

    // 0x1001316d0
    RenderState::WindowProperties::~WindowProperties() {}

    // 0x1001c2c20
    void RenderState::WindowProperties::OverrideWithSetOptions(const RenderState::WindowSetOptions& windowSetOptions) {
        uint8_t local_30[16];

        GetWindowFrame((StockPlayerOffer*)local_30, this, windowSetOptions);
        field_216 = *local_30;
        GetClientRect((StockPlayerOffer*)local_30, this, windowSetOptions);
        field_232 = *local_30;
        field_249 = GetIsFullScreen(windowSetOptions);
    }

    // 0x1001c2ca0
    RSevenOptions* RenderState::RSevenOptions::operator=(const RenderState::RSevenOptions& rSevenOptions) {
        field_16 = rSevenOptions.field_16;
        uint64_t uVar1 = rSevenOptions.field_8;
        field_0 = rSevenOptions.field_0;
        field_8 = uVar1;
        field_24 = rSevenOptions.field_24;
        uVar1 = rSevenOptions.field_656;
        uint64_t uVar2 = rSevenOptions.field_664;
        uint64_t uVar3 = rSevenOptions.field_672;
        uint64_t uVar4 = rSevenOptions.field_680;
        uint64_t uVar5 = rSevenOptions.field_688;
        field_648 = rSevenOptions.field_648;
        field_656 = uVar1;
        field_664 = uVar2;
        field_672 = uVar3;
        field_680 = uVar4;
        field_688 = uVar5;
        field_696 = rSevenOptions.field_696;
        field_768 = rSevenOptions.field_768;
        field_864 = rSevenOptions.field_864;
        *field_868 = rSevenOptions.field_868;
        *(uint32_t*)(field_868 + 60) = *(uint32_t*)(rSevenOptions.field_868 + 60);
        field_932 = rSevenOptions.field_932;
        return this;
    }

    // 0x1001cc0a0
    OverlayViewportState*
    RenderState::OverlayViewportState::operator=(const RenderState::OverlayViewportState& overlayViewportState) {
        *this = overlayViewportState;
        field_16 = overlayViewportState.field_16;
        field_24 = overlayViewportState.field_24;
        return this;
    }

    // 0x1001d2ca0
    RenderState::RenderState() : field_0(0), field_32(0) {
        uint8_t* local_68 = &field_40;
        new (local_68) eastl::fixed_vector<Renderable, 49152ul>();
        new (&field_3539024) eastl::fixed_vector<eastl::pair<int, Model>, 32768ul>(32768);
        uint8_t* local_60 = &field_3539024;
        new (&field_17432696) eastl::fixed_vector<int, 32768ul>(32768);
        uint8_t* local_58 = &field_17432696;
        new (&field_17563808) eastl::vector<RenderState::ModelOutline, BucketAllocatorEASTL>();
        field_17563832 = 0;
        field_17563840 = 0;
        uint8_t* local_50 = &field_17563808;
        new (&field_17563848) eastl::fixed_vector<shared_ptr<RenderState::ModelSubmissionRSeven>, 32768ul>();
        uint8_t* local_48 = &field_17563848;
        new (&field_18088176) eastl::fixed_vector<RenderState::LightSubmissionRSeven, 255ul>();
        uint8_t* local_40 = &field_18088176;
        new (&field_18104544) eastl::hash_map<int, shared_ptr<oldscape::PacketJ<Array<unsigned char>>>>(local_70);
        uint8_t* local_38 = &field_18104544;
        new (&field_18104600) eastl::fixed_vector<RenderState::OverlayRSeven, 32768ul>();
        field_19677504 = 1;
        new (field_19677508) WindowSetOptions();
        new (field_19677552) WindowProperties();
        new ((field_19677552 + 256)) RSevenOptions();
        new ((field_19677552 + 3248)) eastl::fixed_vector<long long, 1000ul>(1000);
        field_19677552[11288] = 0;
        *(uint64_t*)(field_19677552 + 11296) = 0;
        *(uint64_t*)(field_19677552 + 11304) = 0;
    }

    // 0x1001d4960
    RenderState::WindowSetOptions::WindowSetOptions() : field_25(0), field_32(0), field_36(0) {}

    // 0x1001d4980
    RenderState::RSevenOptions::RSevenOptions() {
        MutationTracked<>();
        ___bzero(&field_24, 624);
        new (&field_24) graphics::PostProcessController::Config();
        field_680 = 0;
        field_688 = 0;
        field_664 = 0;
        field_672 = 0;
        field_648 = 0;
        field_656 = 0;
        new (&field_648) graphics::SSAOParams();
        field_696.MutationTracked<>();
        field_768.MutationTracked<>();
        field_864 = 0;
        new (field_868) graphics::SunlightOptions();
        *(uint32_t*)(field_868 + 60) = 0;
        field_932 = 0;
    }

    // 0x1001d5720
    RenderState::RSevenOptions::~RSevenOptions() {}

    // 0x1001d57d0
    RenderState::~RenderState() {
        ((field_19677552 + 3248))->~fixed_vector();
        ((field_19677552 + 256))->~RSevenOptions();
        field_19677552->~WindowProperties();
        field_18104600.~fixed_vector();
        field_18104544.~hash_map();
        field_18088176.~fixed_vector();
        field_17563848.~fixed_vector();
        field_17563808.~vector();
        field_17432696.~fixed_vector();
        field_3539024.~fixed_vector();
        field_40.~fixed_vector();
    }

    // 0x1001e2a40
    RenderState::LightSubmissionRSeven::LightSubmissionRSeven() : graphics::PointLight() {}

    // 0x1001e2e00
    RenderState::OverlayRSeven::OverlayRSeven(RenderState::OverlayRSeven&& overlayRSeven) {
        shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(overlayRSeven);
        new (field_16) OverlayViewportState(overlayRSeven.field_16);
    }

    // 0x1001e2e50
    RenderState::OverlayViewportState::OverlayViewportState(RenderState::OverlayViewportState&& overlayViewportState)
        : math::Rect(overlayViewportState), field_24(overlayViewportState.field_24),
          field_16(overlayViewportState.field_16) {}

    // 0x1001e2e50: RenderState::OverlayViewportState::OverlayViewportState(RenderState::OverlayViewportState const&) has the same machine code as RenderState::OverlayViewportState::OverlayViewportState(RenderState::OverlayViewportState&&)

    // 0x1001e2ee0
    RenderState::OverlayRSeven::OverlayRSeven() : shared_ptr() {}

    // 0x1001e2f20
    RenderState::OverlayViewportState::OverlayViewportState() : shared_ptr() {}

    // 0x10032c580
    RenderState::ModelSubmissionRSeven::ModelSubmissionRSeven() : oldscape::dash3d::OperationBuffer() {}

    // 0x10032c670
    RenderState::ModelSubmissionRSeven::~ModelSubmissionRSeven() {
        field_16->~ResolvedModel();
    }

    // 0x10032db10
    RenderState::OverlayRSeven::OverlayRSeven(const RenderState::OverlayRSeven& overlayRSeven)
        : shared_ptr(overlayRSeven), field_16(overlayRSeven.field_16) {}

} // namespace jag

namespace jag::oldscape {
    class OSRenderCore_AnyThread {
    public:
        OSRenderCore_AnyThread();
        void SetFpsLimit(int arg1);
        uint64_t InitAudio();
        void DestroyAudio();
        OSRenderCore_AnyThread* Instance();
    };

    class OSRenderCore_LogicThread_Common {
    public:
        void GetRenderStateJava();
        void SetFullScreen(bool arg1);
        void SetAntialiasingSampleLevel(int arg1);
        void SetUsingRSeven(bool arg1);
        void SetWindowPos(int arg1, int arg2);
        void SetWindowTopmost(bool arg1);
        void SetClientSize(int arg1, int arg2);
        void SetResizable(bool arg1);
        bool IsLogicThread() const;
        void SetCameraPos(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6);
        void SetMinClientSize(int arg1, int arg2);
        uint64_t GetLastModelLitNXTTotal();
        uint64_t GetLastNumNXTRenderables();
        OSRenderCore_LogicThread_Common();
        void SetZoom(int arg1, int arg2);
        void AddUISceneSettings(const UISceneSettings& uiSceneSettings);
        void SetThreadID();
        bool WasRenderContextReady() const;

    private:
        long field_0;
        long field_8;
        uint8_t _unknown_16[8];
        int field_24;
        int field_28;
        uint8_t _unknown_32[16];
        uint8_t field_48;
    };

    // 0x1000d2550
    void OSRenderCore_LogicThread_Common::SetUsingRSeven(bool arg1) {
        uint32_t in_register_00000031;

        *(unsigned int*)(field_0 + 17563832) = (((uint32_t)in_register_00000031 << 8) | (uint8_t)arg1);
    }

    // 0x1000dc910
    void OSRenderCore_LogicThread_Common::SetWindowPos(int arg1, int arg2) {
        Vector2T<int> local_38 = ((field_0 + 19677552))->GetWindowFrame(*((field_0 + 19677508)));
        auto piVar2 = local_38.SSOBeginPtr();
        if ((*piVar2 == arg1) && (piVar2 = (int*)local_38.y(), *piVar2 == arg2)) {
            return;
        }
        long lVar1 = field_0;
        *(int*)(lVar1 + 19677524) = arg1;
        *(int*)(lVar1 + 19677528) = arg2;
        *(uint8_t*)(lVar1 + 19677544) = *(uint8_t*)(lVar1 + 19677544) | 32;
    }

    // 0x1000fcf40
    void OSRenderCore_LogicThread_Common::SetMinClientSize(int arg1, int arg2) {
        long lVar1 = field_0;
        *(int*)(lVar1 + 19677508) = arg1;
        *(int*)(lVar1 + 19677512) = arg2;
        *(uint8_t*)(lVar1 + 19677544) = *(uint8_t*)(lVar1 + 19677544) | 8;
    }

    // 0x100101870
    uint64_t OSRenderCore_LogicThread_Common::GetLastModelLitNXTTotal() {
        return *(uint64_t*)(field_0 + 19688856);
    }

    // 0x100101880
    uint64_t OSRenderCore_LogicThread_Common::GetLastNumNXTRenderables() {
        return *(uint64_t*)(field_0 + 19688848);
    }

    // 0x1001bb220
    OSRenderCore_AnyThread::OSRenderCore_AnyThread() {
        field_0 = (uint8_t**)(PTR_vtable_100ee8900 + 16);
    }

    // 0x1001bb460
    OSRenderCore_LogicThread_Common::OSRenderCore_LogicThread_Common() : field_8(0), field_48(0) {}

    // 0x1001c2d80
    uint8_t* OSRenderCore_RenderThread_JavaStyle::GetNxtUploadedModels() {
        return &field_8592;
    }

    // 0x1001c2d90
    bool OSRenderCore_RenderThread_Common::IsRenderContextReady() {
        return ((RenderDevice*)Instance())->GetReadyState() == 0;
    }

    // 0x1001c2e30
    void OSRenderCore_RenderThread::ApplyWindowSetOptions() {
        bool arg1;
        uint8_t uVar2;
        uint64_t extraout_var;
        uint64_t extraout_var_00;
        uint64_t extraout_var_01;
        uint64_t extraout_var_02;
        uint64_t extraout_var_03;

        if ((*(uint8_t*)(*(long*)(field_32 + (long)(this->_vptr[-3].GetUISize + 56)) + 19677544) & 8) != 0) {
            uVar2 = field_16020136->GetWindow();
            ((Window*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar2))
                ->SetMinClientSize(*(int*)(*(long*)(field_32 + (long)(this->_vptr[-3].GetUISize + 56)) + 19677508),
                                   *(int*)(*(long*)(field_32 + (long)(this->_vptr[-3].GetUISize + 56)) + 19677512));
        }
        if ((*(uint8_t*)(*(long*)(field_32 + (long)(this->_vptr[-3].GetUISize + 56)) + 19677544) & 1) != 0) {
            uVar2 = field_16020136->GetWindow();
            ((Window*)(((uint64_t)extraout_var_00 << 8) | (uint8_t)uVar2))
                ->SetSize((float)*(int*)(*(long*)(field_32 + (long)(this->_vptr[-3].GetUISize + 56)) + 19677516),
                          (float)*(int*)(*(long*)(field_32 + (long)(this->_vptr[-3].GetUISize + 56)) + 19677520));
        }
        if ((*(uint8_t*)(*(long*)(field_32 + (long)(this->_vptr[-3].GetUISize + 56)) + 19677544) & 32) != 0) {
            uVar2 = field_16020136->GetWindow();
            ((Window*)(((uint64_t)extraout_var_01 << 8) | (uint8_t)uVar2))
                ->SetPosition(*(int*)(*(long*)(field_32 + (long)(this->_vptr[-3].GetUISize + 56)) + 19677524),
                              *(int*)(*(long*)(field_32 + (long)(this->_vptr[-3].GetUISize + 56)) + 19677528));
        }
        if ((*(uint8_t*)(*(long*)(field_32 + (long)(this->_vptr[-3].GetUISize + 56)) + 19677544) & 2) != 0) {
            arg1 = *(bool*)(*(long*)(field_32 + (long)(this->_vptr[-3].GetUISize + 56)) + 19677532);
            uVar2 = field_16020136->GetWindow();
            ((Window*)(((uint64_t)extraout_var_02 << 8) | (uint8_t)uVar2))->SetResizable(arg1);
        }
        if ((*(uint8_t*)(*(long*)(field_32 + (long)(this->_vptr[-3].GetUISize + 56)) + 19677544) & 4) != 0) {
            uVar2 = field_16020136->GetWindow();
            ((Window*)(((uint64_t)extraout_var_03 << 8) | (uint8_t)uVar2))
                ->SetTopmost(*(bool*)(*(long*)(field_32 + (long)(this->_vptr[-3].GetUISize + 56)) + 19677533));
        }
        if ((*(uint8_t*)(*(long*)(field_32 + (long)(this->_vptr[-3].GetUISize + 56)) + 19677544) & 16) != 0) {
            field_16020136->SetFullScreenMode(
                *(bool*)(*(long*)(field_32 + (long)(this->_vptr[-3].GetUISize + 56)) + 19677534));
        }
        GetUISize* pGVar1 = this->_vptr[-3].GetUISize;
        if ((*(uint8_t*)(*(long*)(field_32 + (long)(pGVar1 + 56)) + 19677544) & 64) != 0) {
            *(int*)(field_32 + (long)(pGVar1 + 16)) =
                1 << (*(uint8_t*)(*(long*)(field_32 + (long)(pGVar1 + 56)) + 19677536) & 31);
        }
        field_1580376 = field_1580368.ShouldUseRenderTargets();
        *(uint32_t*)(*(long*)(field_32 + (long)(this->_vptr[-3].GetUISize + 56)) + 19677544) = 0;
    }

    // 0x1001c3000
    bool OSRenderCore_RenderThread_JavaStyle::ShouldUseRenderTargets() {
        long lVar1 = *(long*)((long)field_0 - 24);
        return 1 < *(int*)(field_16 + lVar1 + 32);
    }

    // 0x1001c3020
    EffectList* OSRenderCore_LogicThread_RSeven::GetEffectListMutable() {
        return (EffectList*)((MutationTracked<jag::graphics::EffectList>*)(*(long*)((long)&field_0 +
                                                                                    *(long*)((long)field_0 - 24)) +
                                                                           19677808))
            ->GetMutable();
    }

    // 0x1001c3050
    EffectList* OSRenderCore_LogicThread_RSeven::GetEffectList() const {
        return (EffectList*)((Layout*)(*(long*)((long)&field_0 + *(long*)((long)field_0 - 24)) + 19677808))
            ->SSOBeginPtr();
    }

    // 0x1001c3070
    void OSRenderCore_RenderThread::OnBeginFrame() {
        unsigned int arg1;
        unsigned int* puVar4;

        OSRenderCore_RenderThread_vtbl* pOVar2 = this->_vptr;
        GetUISize* pGVar3 = pOVar2[-3].GetUISize;
        int iVar1 = *(int*)(*(long*)(field_32 + (long)(pGVar3 + 56)) + 17563832);
        if (*(int*)(field_32 + (long)(pGVar3 + 72)) != iVar1) {
            *(int*)(field_32 + (long)(pGVar3 + 72)) = iVar1;
            puVar4 = (unsigned int*)((Layout*)(field_32 + (long)(pOVar2[-3].GetUISize + 8)))->SSOBeginPtr();
            arg1 = *puVar4;
            puVar4 = (unsigned int*)((Vector2T<int>*)(field_32 + (long)(this->_vptr[-3].GetUISize + 8)))->y();
            SetScreenSize(arg1, *puVar4);
        }
        ((RT7Core*)field_8.operator->())->BeginFrame();
    }

    // 0x1001c30f0
    void OSRenderCore_RenderThread_UI::ClearPixelBuffer(unsigned int* arg1, unsigned int arg2) {
        ___bzero(arg1, (unsigned long)arg2 << 2);
    }

    // 0x1001c3110
    void OSRenderCore_RenderThread::GetUISize(unsigned int& arg1, unsigned int& arg2) {
        unsigned int* puVar2;

        long lVar1 = ((OSRenderCore_RenderThread_Common*)(field_32 + (long)(this->_vptr[-3].GetUISize - 32)))
                         ->GetRenderStateNXT();
        if (*(int*)(lVar1 + 17563832) == 0) {
            if (field_1580376 == '\0') {
                puVar2 = (unsigned int*)((Layout*)(field_32 + (long)(this->_vptr[-3].GetUISize + 8)))->SSOBeginPtr();
            } else {
                puVar2 = (unsigned int*)((field_1580384 + 48))->second();
            }
            arg1 = *puVar2;
            if (field_1580376 != '\0') {
                lVar1 = ((field_1580384 + 48))->second();
                puVar2 = (unsigned int*)(lVar1 + 4);
                goto LAB_1001c31b6;
            }
        } else {
            puVar2 = (unsigned int*)((Layout*)(field_32 + (long)(this->_vptr[-3].GetUISize + 8)))->SSOBeginPtr();
            arg1 = *puVar2;
        }
        puVar2 = (unsigned int*)((Vector2T<int>*)(field_32 + (long)(this->_vptr[-3].GetUISize + 8)))->y();
    LAB_1001c31b6:
        arg2 = *puVar2;
    }

    // 0x1001c31e0
    void OSRenderCore_LogicThread_Common::SetZoom(int arg1, int arg2) {
        field_24 = arg1;
        field_28 = arg2;
        field_48 = 1;
    }

    // 0x1001c31f0
    void OSRenderCore_LogicThread_Common::AddUISceneSettings(const UISceneSettings& uiSceneSettings) {
        field_16 = uiSceneSettings;
        field_48 = 1;
    }

    // 0x1001c3210
    void OSRenderCore_LogicThread_JavaStyle::RenderTriangle(short arg1, short arg2, short arg3, short arg4, short arg5,
                                                            short arg6, short arg7, short arg8, short arg9, short arg10,
                                                            short arg11, short arg12, short arg13, short arg14,
                                                            short arg15, short arg16, short arg17, short arg18,
                                                            short arg19, short arg20, short arg21, short arg22,
                                                            short arg23, short arg24) {
        Renderable* pRVar2;
        UISceneSettings* this_00;

        long lVar3 = field_0;
        long lVar1 = *(long*)(lVar3 - 24);
        if (*(char*)((long)&this[1].field_0 + lVar1) != '\0') {
            *(uint8_t*)((long)&this[1].field_0 + lVar1) = 0;
            lVar3 = *(long*)(lVar3 - 24);
            lVar1 = ((Layout*)((long)&field_0 + lVar3))->HeapBeginPtr();
            pRVar2 = ((lVar1 + 40))->emplace_back<RenderableType>((RenderableType)2);
            this_00 = (UISceneSettings*)pRVar2->y();
            *this_00 = (*((&field_16 + lVar3)));
        }
        lVar3 = ((Layout*)((long)&field_0 + *(long*)(field_0 - 24)))->HeapBeginPtr();
        pRVar2 = ((lVar3 + 40))->emplace_back<RenderableType>((RenderableType)1);
        auto this_01 = pRVar2->y();
        short* psVar4 = (short*)(*this_01)[0];
        *psVar4 = arg1;
        psVar4[1] = arg2;
        psVar4[2] = arg3;
        psVar4[3] = arg4;
        psVar4[4] = arg5;
        psVar4[5] = arg6;
        psVar4[6] = arg7;
        psVar4[7] = arg8;
        psVar4[8] = arg9;
        psVar4[9] = arg10;
        psVar4[10] = arg11;
        psVar4[11] = arg12;
        psVar4[12] = arg13;
        psVar4[13] = arg14;
        psVar4[14] = arg15;
        psVar4[15] = arg16;
        psVar4[16] = arg17;
        psVar4[17] = arg18;
        psVar4[18] = arg19;
        psVar4[19] = arg20;
        psVar4[20] = arg21;
        psVar4[21] = arg22;
        psVar4[22] = arg23;
        psVar4[23] = arg24;
    }

    // 0x1001c3410
    void OSRenderCore_AnyThread::SetFpsLimit(int arg1) {
        auto this_00 = GraphicsApp::Instance();
        if (this_00 != nullptr) {
            this_00->SetMaxForegroundFps(arg1);
            this_00->SetMaxBackgroundFps(arg1);
        }
    }

    // 0x1001c3450
    uint64_t OSRenderCore_AnyThread::InitAudio() {
        TaskRunner* this_02;
        __0* in_RSI;
        AudioSystemStartParams local_58;

        Layout* this_00 = (Layout*)(*(void (*)(...))*field_0)();
        bool cVar1 = (this_00->SSOBeginPtr())->operator_cast_to_bool();
        uint64_t uVar2 = 1;
        if (!cVar1) {
            this_02 = (TaskRunner*)getTaskRunner();
            std::function<Task*()>::function<OSRenderCore_AnyThread::InitAudio()::__0, void>(
                (function<Task*()>*)&local_58, in_RSI);
            this_02->DeclareTask("MixerWorker", "", local_58);
            local_58 = hal::audio::AudioSystemStartParams();
            local_58[0]._4_8_ = 17592186066466;
            uVar2 = ((AudioAPI*)(*(void (*)(...))*field_0)(this))->StartAudioSystem(local_58, nullptr);
        }
        return uVar2;
    }

    // 0x100365fb0
    bool OSRenderCore_LogicThread_Common::WasRenderContextReady() const {
        return *(uint8_t*)(field_0 + 19688840);
    }

} // namespace jag::oldscape

namespace jag::render {
    class RenderState {
    public:
        RenderState();

    private:
        uint64_t field_0;
        uint8_t _unknown_8[48];
        uint8_t field_56;
        uint8_t _unknown_57[19];
        uint8_t field_76;
    };

    // 0x10012dc10: ShaderPrecisionProfile::ShaderPrecisionProfile(ShaderVariablePrecision, ShaderVariablePrecision, ShaderVariablePrecision, ShaderVariablePrecision, ShaderVariablePrecision, ShaderVariablePrecision) has the same machine code as jag::RenderState::CameraPos::Set(int, int, int, int, int, int)

    // 0x100c32b50
    RenderState::RenderState() : field_0(0) {
        new (&field_8) std::array<Viewport, 2ul>();
        field_56 = 0;
        new (&field_60) shared_ptr();
        field_76 = 0;
    }

} // namespace jag::render
