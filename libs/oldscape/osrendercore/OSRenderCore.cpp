// libs/oldscape/osrendercore/OSRenderCore.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.osrendercore

#include "OSRenderCore.h"

namespace jag::oldscape {
    // 0x100fc91d0, 8 bytes, __common; zero-initialised
    OSRenderCore_Impl::m_pCore;

    // 0x1001bb000, 304 bytes, base-object constructor, placed by debug map only (low confidence)
    // OSRenderCore_Impl::OSRenderCore_Impl(GraphicsApp&)
    void OSRenderCore_Impl::OSRenderCore_Impl(GraphicsApp* param_1) {
        undefined1* this_00;
        NpcUID* pNVar1;
        undefined4 uVar2;
        undefined8 uVar3;

        new (this) OSRenderCore_LogicThread();
        new (&field_704, (GraphicsApp*)(param_1->field_16 + 24)) OSRenderCore_RenderThread();
        new (field_16020848) OSRenderCore_AnyThread();
        field_0 = (NpcUID*)param_1->field_0;
        *(undefined8*)field_16 = *(undefined8*)&param_1->field_88;
        uVar2 = *(undefined4*)&param_1->field_100;
        field_704 = param_1->field_96;
        field_708 = uVar2;
        field_816 = *(undefined***)&param_1->field_104;
        field_1581072 = *(undefined**)&param_1->field_112;
        *(undefined***)field_16020848 = &PTR_GetAudioAPI_100ef6768;
        std::make_unique<hal::audio::AudioAPI>();
        this_00 = &field_16020864;
        new (this_00) std::array<RenderState, 2ul>();
        m_pCore = this;
        uVar3 = std::array<RenderState, 2ul>::operator[]((array<RenderState, 2ul>*)this_00, 0);
        pNVar1 = field_0;
        *(undefined8*)(field_16 + *(long*)(pNVar1 + -8) + 72) = uVar3;
        uVar3 = std::array<RenderState, 2ul>::operator[]((array<RenderState, 2ul>*)this_00, 1);
        *(undefined8*)(field_16 + *(long*)(pNVar1 + -6) + -16) = uVar3;
    }

    // 0x1001bb170, 176 bytes, base-object constructor, placed by debug map only (low confidence)
    // OSRenderCore_RenderThread::OSRenderCore_RenderThread(GraphicsApp&)
    void OSRenderCore_RenderThread::OSRenderCore_RenderThread(GraphicsApp* param_1) {
        GraphicsApp* in_RDX;

        new (this) OSRenderCore_RenderThread_RSeven();
        new (field_112) OSRenderCore_RenderThread_UI();
        new (&field_1580368) OSRenderCore_RenderThread_JavaStyle();
        field_0 = param_1->field_0;
        *(undefined8*)field_112 = *(undefined8*)(param_1->field_16 + 16);
        field_1580368 = *(undefined8*)(param_1->field_16 + 24);
        field_16020136 = in_RDX;
    }

    // 0x1001bb2c0, 64 bytes, base-object destructor, placed by debug map only (low confidence)
    // OSRenderCore_RenderThread::~OSRenderCore_RenderThread()
    void OSRenderCore_RenderThread::~OSRenderCore_RenderThread() {
        (&field_1580368)->~OSRenderCore_RenderThread_JavaStyle();
        field_112->~OSRenderCore_RenderThread_UI();
        ~OSRenderCore_RenderThread_RSeven();
    }

    // 0x1001bb320, 320 bytes, complete-object constructor, placed by debug map only (low confidence)
    // OSRenderCore_Impl::OSRenderCore_Impl(GraphicsApp&)
    void OSRenderCore_Impl::OSRenderCore_Impl(GraphicsApp* param_1) {
        undefined1* this_00;
        NpcUID* pNVar1;
        undefined8 uVar2;

        new (field_55398600) OSRenderCore_LogicThread_Common();
        new (field_55398656) OSRenderCore_RenderThread_Common();
        new (this) OSRenderCore_LogicThread();
        new (&field_704, (GraphicsApp*)&PTR_PTR_100ef6798) OSRenderCore_RenderThread();
        new (field_16020848) OSRenderCore_AnyThread();
        field_0 = (NpcUID*)&PTR_TexturesUploaded_100ef66b8;
        *(undefined**)field_16 = &DAT_100ef66f0;
        *(undefined***)&field_704 = &PTR_FlipThreadRenderStates_100ef6708;
        field_816 = &PTR_GetUISize_100ef6738;
        field_1581072 = &DAT_100ef6758;
        *(undefined***)field_16020848 = &PTR_GetAudioAPI_100ef6768;
        std::make_unique<hal::audio::AudioAPI>();
        this_00 = &field_16020864;
        new (this_00) std::array<RenderState, 2ul>();
        m_pCore = this;
        uVar2 = std::array<RenderState, 2ul>::operator[]((array<RenderState, 2ul>*)this_00, 0);
        pNVar1 = field_0;
        *(undefined8*)(field_16 + *(long*)(pNVar1 + -8) + 72) = uVar2;
        uVar2 = std::array<RenderState, 2ul>::operator[]((array<RenderState, 2ul>*)this_00, 1);
        *(undefined8*)(field_16 + *(long*)(pNVar1 + -6) + -16) = uVar2;
    }

    // 0x1001bb490, 96 bytes, base-object constructor, placed by debug map only (low confidence)
    // OSRenderCore_RenderThread_Common::OSRenderCore_RenderThread_Common()
    void OSRenderCore_RenderThread_Common::OSRenderCore_RenderThread_Common() {
        new (this) render::Viewport(0, 0, 0, 0, 0.0, 1.0);
        new (&field_24, (_func_decltype_nullptr*)0) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_40, 0, 0) sidebars::SideBarData();
        field_48 = 1;
        new (&field_64) jag::math::Vector4T<float>();
        field_80 = 0;
        field_104 = 0;
    }

    // 0x1001bb4f0, 160 bytes, base-object destructor, placed by debug map only (low confidence)
    // OSRenderCore_Impl::~OSRenderCore_Impl()
    void OSRenderCore_Impl::~OSRenderCore_Impl() {
        undefined8 uVar1;
        undefined8* in_RSI;

        field_0 = (NpcUID*)*in_RSI;
        *(undefined8*)field_16 = in_RSI[11];
        uVar1 = in_RSI[12];
        field_704 = (int)uVar1;
        field_708 = (int)((ulong)uVar1 >> 32);
        field_816 = (undefined**)in_RSI[13];
        field_1581072 = (undefined*)in_RSI[14];
        *(undefined***)field_16020848 = &PTR_GetAudioAPI_100ef6768;
        m_pCore = 0;
        (&field_16020864)->~array();
        (&field_16020856)->~unique_ptr();
        (&field_704)->~OSRenderCore_RenderThread();
        ~OSRenderCore_LogicThread();
    }

    // 0x1001bb5a0, 32 bytes, complete-object destructor, placed by debug map only (low confidence)
    // OSRenderCore_Impl::~OSRenderCore_Impl()
    void OSRenderCore_Impl::~OSRenderCore_Impl() {
        ~OSRenderCore_Impl(this);
    }

    // 0x1001bb5c0, 16 bytes, complete-object constructor, placed by debug map only (low confidence)
    // OSRenderCore_RenderThread_Common::OSRenderCore_RenderThread_Common(): jumps straight to the base-object constructor

    // 0x1001bb5d0, 432 bytes, base-object constructor, placed by debug map only (low confidence)
    // NoJs5ResourceProvider::NoJs5ResourceProvider()
    void NoJs5ResourceProvider::NoJs5ResourceProvider() {
        eastl::string local_e0[32];
        eastl::string local_c0[32];
        allocator local_a0[8];
        eastl::string local_98[32];
        eastl::string local_78[32];
        VBOMapper local_58;
        allocator local_38[8];
        allocator local_30[8];
        allocator local_28[8];

        eastl::allocator::allocator(local_a0, "EASTL basic_string");
        eastl::string::basic_string(local_c0, "storename", local_a0);
        eastl::allocator::allocator(local_38, "EASTL basic_string");
        eastl::string::basic_string(local_98, "binaryUrl1", local_38);
        eastl::allocator::allocator(local_30, "EASTL basic_string");
        eastl::string::basic_string(local_78, "httpurl", local_30);
        new (&local_58) PacketT<Array<unsigned char, eastl::allocator>>();
        eastl::allocator::allocator(local_28, "EASTL basic_string");
        eastl::string::basic_string(local_e0, "", local_28);
        new (this)
            Js5ResourceProvider(local_c0, local_98, local_78, (SystemSettings*)&bogusSystemSettings,
                                (PacketT*)&local_58, 0, (Js5ArchiveSetSettings*)&noArchiveSets, true, 0, 0, local_e0);
        eastl::string::~basic_string(local_e0);
        local_58.~VBOMapper();
        eastl::string::~basic_string(local_78);
        eastl::string::~basic_string(local_98);
        eastl::string::~basic_string(local_c0);
        field_0 = (undefined**)(PTR_vtable_100ee88f8 + 16);
    }

    // 0x1001bb780, 16 bytes, complete-object constructor, placed by debug map only (low confidence)
    // NoJs5ResourceProvider::NoJs5ResourceProvider(): jumps straight to the base-object constructor

    // 0x1001bb790, 256 bytes, base-object constructor, placed by debug map only (low confidence)
    // OSRenderCore_RenderThread_RSeven::OSRenderCore_RenderThread_RSeven()
    void OSRenderCore_RenderThread_RSeven::OSRenderCore_RenderThread_RSeven() {
        Language** ppLVar1;
        undefined8* in_RSI;
        Array* in_R9;
        Array<game::ConfigTypeListContainerStrategy, eastl::allocator> local_60[24];
        unique_ptr local_48[8];
        bool local_40[15];
        undefined1 local_31;

        field_0 = (undefined*)*in_RSI;
        std::unique_ptr<jag::graphics::RT7Core, std::default_delete<jag::graphics::RT7Core>>::unique_ptr<true, void>(
            (unique_ptr<jag::graphics::RT7Core, std::default_delete<jag::graphics::RT7Core>>*)&field_8);
        std::unique_ptr<rseven::Scene, std::default_delete<rseven::Scene>>::unique_ptr<true, void>(
            (unique_ptr<rseven::Scene, std::default_delete<rseven::Scene>>*)&field_16);
        std::unique_ptr<NoJs5ResourceProvider, std::default_delete<NoJs5ResourceProvider>>::unique_ptr<true, void>(
            (unique_ptr<NoJs5ResourceProvider, std::default_delete<NoJs5ResourceProvider>>*)&field_24);
        new (field_32) Js5ArchiveSettings();
        std::unique_ptr<game::ConfigProvider, std::default_delete<game::ConfigProvider>>::unique_ptr<true, void>(
            (unique_ptr<game::ConfigProvider, std::default_delete<game::ConfigProvider>>*)&field_96);
        Array<game::ConfigTypeListContainerStrategy, eastl::allocator>::Array(local_60);
        ppLVar1 =
            (Language**)std::unique_ptr<NoJs5ResourceProvider, std::default_delete<NoJs5ResourceProvider>>::operator*(
                (unique_ptr<NoJs5ResourceProvider, std::default_delete<NoJs5ResourceProvider>>*)&field_24);
        local_31 = 1;
        local_40[0] = false;
        local_40[1] = false;
        local_40[2] = false;
        local_40[3] = false;
        local_40[4] = false;
        local_40[5] = false;
        local_40[6] = false;
        local_40[7] = false;
        std::make_unique<game::ConfigProvider, NoJs5ResourceProvider&, Language_const*&, ModeGame_const*&, bool,
                         decltype(nullptr), Array<game::ConfigTypeListContainerStrategy, eastl::allocator>&>(
            (NoJs5ResourceProvider*)local_48, ppLVar1, (ModeGame**)&local_31, local_40,
            (_func_decltype_nullptr**)local_60, in_R9);
        std::unique_ptr<game::ConfigProvider, std::default_delete<game::ConfigProvider>>::operator=(
            (unique_ptr<game::ConfigProvider, std::default_delete<game::ConfigProvider>>*)&field_96, local_48);
        local_48->~unique_ptr();
        local_60->~Array();
    }

    // 0x1001bba10, 272 bytes, complete-object constructor, placed by debug map only (low confidence)
    // OSRenderCore_RenderThread_RSeven::OSRenderCore_RenderThread_RSeven()
    void OSRenderCore_RenderThread_RSeven::OSRenderCore_RenderThread_RSeven() {
        Language** ppLVar1;
        Array* in_R9;
        Array<game::ConfigTypeListContainerStrategy, eastl::allocator> local_60[24];
        unique_ptr local_48[8];
        bool local_40[15];
        undefined1 local_31;

        new (field_112) OSRenderCore_RenderThread_Common();
        field_0 = PTR_vtable_100ee8928 + 24;
        std::unique_ptr<jag::graphics::RT7Core, std::default_delete<jag::graphics::RT7Core>>::unique_ptr<true, void>(
            (unique_ptr<jag::graphics::RT7Core, std::default_delete<jag::graphics::RT7Core>>*)&field_8);
        std::unique_ptr<rseven::Scene, std::default_delete<rseven::Scene>>::unique_ptr<true, void>(
            (unique_ptr<rseven::Scene, std::default_delete<rseven::Scene>>*)&field_16);
        std::unique_ptr<NoJs5ResourceProvider, std::default_delete<NoJs5ResourceProvider>>::unique_ptr<true, void>(
            (unique_ptr<NoJs5ResourceProvider, std::default_delete<NoJs5ResourceProvider>>*)&field_24);
        new (field_32) Js5ArchiveSettings();
        std::unique_ptr<game::ConfigProvider, std::default_delete<game::ConfigProvider>>::unique_ptr<true, void>(
            (unique_ptr<game::ConfigProvider, std::default_delete<game::ConfigProvider>>*)&field_96);
        Array<game::ConfigTypeListContainerStrategy, eastl::allocator>::Array(local_60);
        ppLVar1 =
            (Language**)std::unique_ptr<NoJs5ResourceProvider, std::default_delete<NoJs5ResourceProvider>>::operator*(
                (unique_ptr<NoJs5ResourceProvider, std::default_delete<NoJs5ResourceProvider>>*)&field_24);
        local_31 = 1;
        local_40[0] = false;
        local_40[1] = false;
        local_40[2] = false;
        local_40[3] = false;
        local_40[4] = false;
        local_40[5] = false;
        local_40[6] = false;
        local_40[7] = false;
        std::make_unique<game::ConfigProvider, NoJs5ResourceProvider&, Language_const*&, ModeGame_const*&, bool,
                         decltype(nullptr), Array<game::ConfigTypeListContainerStrategy, eastl::allocator>&>(
            (NoJs5ResourceProvider*)local_48, ppLVar1, (ModeGame**)&local_31, local_40,
            (_func_decltype_nullptr**)local_60, in_R9);
        std::unique_ptr<game::ConfigProvider, std::default_delete<game::ConfigProvider>>::operator=(
            (unique_ptr<game::ConfigProvider, std::default_delete<game::ConfigProvider>>*)&field_96, local_48);
        local_48->~unique_ptr();
        local_60->~Array();
    }

    // 0x1001bc200, 16 bytes, complete-object destructor, placed by debug map only (low confidence)
    // OSRenderCore_RenderThread::~OSRenderCore_RenderThread(): jumps straight to the base-object destructor

    // 0x1001bc210, 96 bytes, placed by debug map only (low confidence)
    // OSRenderCore_RenderThread::Init()
    void OSRenderCore_RenderThread::Init() {
        MapArea* this_00;
        long lVar1;

        this_00 = (MapArea*)Instance();
        lVar1 = this_00->GetOrigin();
        (field_1580384, *(char*)(lVar1 + 180) != '\0' || *(char*)(lVar1 + 179) != '\0')->SetLightsLevelsAbove();
        field_1580360 = 0;
        InitRSeven(*(int*)(field_32 + (long)(field_0[-3] + 16)));
    }

    // 0x1001bd060, 160 bytes, placed by __FILE__ string
    // OSRenderCore_LogicThread_JavaStyle::SetTextureOffsets(int const*, int const*, int)
    void OSRenderCore_LogicThread_JavaStyle::SetTextureOffsets(int* param_1, int* param_2, int param_3) {
        void* pvVar1;

        if (256 < param_3) {
            /* WARNING: Subroutine does not return */
            LogAssert("numTextures <= (int)m_pRenderStateJava->m_textureXOffsets.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/osrendercore/"
                      "OSRenderCore.cpp",
                      252, (char*)0);
        }
        pvVar1 =
            (void*)std::array<int, 256ul>::operator[](*(long*)((long)&field_0 + *(long*)(field_0 + -24)) + 19678752);
        _memcpy(pvVar1, param_1, (long)param_3 << 2);
        pvVar1 =
            (void*)std::array<int, 256ul>::operator[](*(long*)((long)&field_0 + *(long*)(field_0 + -24)) + 19679776);
        _memcpy(pvVar1, param_2, (long)param_3 << 2);
    }

    // 0x1001bd110, 144 bytes, placed by __FILE__ string
    // OSRenderCore_RenderThread_UI::NewFrame2D()
    void OSRenderCore_RenderThread_UI::NewFrame2D() {
        BufferInterface* this_00;
        undefined8 uVar2;
        undefined8 local_30[3];

        if (*(char*)&this[1].field_0 != '\0') {
            this_00 = (BufferInterface*)(&field_1579984)->GetWrite();
            if (this_00->IsCreated() == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("m_uiPBO.GetWrite().IsCreated()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/osrendercore/"
                          "OSRenderCore.cpp",
                          261, (char*)0);
            }
            uVar2 = (&field_1579984)->GetWrite();
            render::PixelUnpackBuffer::MapWrite((ResourceDataT<unsigned char const>*)local_30, uVar2, 6, 0, 0, 0);
            field_1580240 = local_30[0];
            local_30->~ResourceDataT();
        }
    }

    // 0x1001bd1c0, 368 bytes, placed by neighbouring functions
    // OSRenderCore_RenderThread_UI::EndFrame2D()
    void OSRenderCore_RenderThread_UI::EndFrame2D() {
        RoundRobin<eastl::fixed_vector<jag::math::Vector2T<float>, 98304ul, true, eastl::allocator>, 2ul>* this_00;
        undefined1* this_01;
        undefined1* this_02;
        undefined4 uVar1;
        char cVar2;
        int iVar3;
        PixelUnpackBuffer* pPVar4;
        long* plVar5;
        compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                    eastl::allocator>>::Layout,
                            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>* pcVar6;
        undefined4* puVar7;
        long lVar8;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* this_03;
        VertexBuffer* pVVar9;
        vector<eastl::pair<int, int>, eastl::allocator>* this_04;
        Layout* this_05;
        undefined8 uVar10;

        if (*(char*)&this[1].field_0 != '\0') {
            this_01 = &field_1579984;
            pPVar4 = (PixelUnpackBuffer*)this_01->GetWrite();
            pPVar4->Unmap();
            field_1580240 = 0;
            pPVar4 = (PixelUnpackBuffer*)this_01->GetWrite();
            pPVar4->Bind();
            this_02 = &field_1578944;
            plVar5 = (long*)this_02->GetWrite();
            pcVar6 =
                (compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                             eastl::allocator>>::Layout,
                                     eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>*)
                    this_02->GetWrite();
            puVar7 = (undefined4*)eastl::compressed_pair_imp<
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::Layout,
                eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>::second(pcVar6);
            uVar1 = *puVar7;
            pcVar6 =
                (compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                             eastl::allocator>>::Layout,
                                     eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>*)
                    this_02->GetWrite();
            lVar8 = eastl::compressed_pair_imp<
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::Layout,
                eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>::second(pcVar6);
            (**(code**)(*plVar5 + 40))(plVar5, 0, 0, 0, uVar1, *(undefined4*)(lVar8 + 4), 29, 0);
            pPVar4 = (PixelUnpackBuffer*)this_01->GetWrite();
            pPVar4->Unbind();
        }
        this_00 = (RoundRobin<eastl::fixed_vector<jag::math::Vector2T<float>, 98304ul, true, eastl::allocator>,
                              2ul>*)(field_8 + 16);
        this_03 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)
                      this_00->GetWrite();
        cVar2 = eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(
            this_03);
        if (cVar2 == '\0') {
            pVVar9 = (VertexBuffer*)(&field_1572984)->GetWrite();
            this_04 = (vector<eastl::pair<int, int>, eastl::allocator>*)this_00->GetWrite();
            iVar3 = eastl::vector<eastl::pair<int, int>, eastl::allocator>::size(this_04);
            this_05 = (Layout*)this_00->GetWrite();
            uVar10 =
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(this_05);
            pVVar9->Update(0, iVar3 * 8, uVar10, 2);
        }
        (&field_1578944)->Advance();
        (&field_1572984)->Advance();
        this_00->Advance();
        (&field_1579984)->Advance();
        (&field_1580160)->Advance();
    }

    // 0x1001bd440, 16 bytes, placed by neighbouring functions
    // OSRenderCore_RenderThread::NewFrame3D()
    void OSRenderCore_RenderThread::NewFrame3D() {
        field_112->NewFrame2D();
    }

    // 0x1001bd450, 80 bytes, placed by neighbouring functions
    // OSRenderCore_RenderThread::EndFrame3D()
    void OSRenderCore_RenderThread::EndFrame3D() {
        long lVar1;

        lVar1 = ((field_32 + (long)(field_0[-3] + -32)))->GetRenderStateNXT();
        if (*(int*)(lVar1 + 17563832) == 0) {
            (&field_1584944)->Advance();
            (&field_16007448)->Advance();
        }
        field_112->EndFrame2D();
    }

    // 0x1001bd4d0, 16 bytes, placed by neighbouring functions
    // OSRenderCore_RenderThread::Paint()
    void OSRenderCore_RenderThread::Paint() {
        PaintDirect(this);
    }

    // 0x1001bd4e0, 672 bytes, placed by neighbouring functions
    // OSRenderCore_RenderThread::PaintDirect()
    void OSRenderCore_RenderThread::PaintDirect() {
        undefined8 uVar1;
        char cVar2;
        int iVar3;
        int iVar4;
        RenderContext* this_00;
        RenderTargets* pRVar5;
        long lVar6;
        RT7Core* this_01;
        EffectManager* pEVar7;
        SunlightDirectLighting* pSVar8;
        longlong lVar9;
        SunlightShadows* this_02;
        fixed_vector<jag::math::Vector2T<float>, 98304ul, true, eastl::allocator>* this_03;
        MSIType* this_04;
        float fVar10;
        undefined4 uVar11;
        undefined1 local_60[32];
        undefined8 local_40;
        undefined4 local_38;

        this_00 = (RenderContext*)field_16020136->GetDefaultRenderContext();
        cVar2 = this_00->IsInsideBeginEnd();
        if (cVar2 != '\0') {
            UpdateRenderTargetSizes(this, this_00);
            iVar3 = this_00->GetBackBufferWidth();
            iVar4 = this_00->GetBackBufferHeight();
            uVar11 = 1065353216;
            new (local_60) render::Viewport(0, 0, iVar3, iVar4, 0.0, 1.0);
            this_00->SetViewports(local_60, 1);
            pRVar5 = (RenderTargets*)this_00->GetBackBuffer();
            this_00->SetRenderTargets(pRVar5);
            this_00->ClearDepthStencilTarget(1.0, 0, 2);
            lVar6 = ((field_32 + (long)(field_0[-3] + -32)))->GetRenderStateNXT();
            if (*(int*)(lVar6 + 17563832) == 0) {
                (&field_1580368, this_00)->PaintJavaStyle();
            } else {
                this_01 =
                    (RT7Core*)std::unique_ptr<jag::graphics::RT7Core, std::default_delete<jag::graphics::RT7Core>>::
                    operator->(
                        (unique_ptr<jag::graphics::RT7Core, std::default_delete<jag::graphics::RT7Core>>*)&field_8);
                pEVar7 = (EffectManager*)this_01->GetEffectManager();
                lVar6 = ((field_32 + (long)(field_0[-3] + -32)))->GetRenderStateNXT();
                this_04 = (MSIType*)(lVar6 + 19678676);
                cVar2 = pEVar7->IsEnabled(29);
                if (cVar2 != '\0') {
                    pSVar8 = jag::graphics::EffectManager::GetEffect<jag::graphics::SunlightDirectLighting>(pEVar7, 29);
                    local_40 = this_04->GetSunDirection();
                    local_38 = uVar11;
                    lVar9 = local_40.Normalize();
                    jag::graphics::SunlightDirectLighting::SetDirection((Vector3T*)pSVar8, lVar9, 0);
                    local_40 = this_04->GetAdjustedAmbientColour();
                    local_38 = uVar11;
                    jag::graphics::SunlightDirectLighting::SetAmbientColour((Vector3T*)pSVar8, (longlong)&local_40, 0);
                    local_40 = this_04->GetAdjustedSunColour();
                    local_38 = uVar11;
                    jag::graphics::SunlightDirectLighting::SetColour((Vector3T*)pSVar8, (longlong)&local_40, 0);
                }
                cVar2 = pEVar7->IsEnabled(30);
                if (cVar2 != '\0') {
                    this_02 = (SunlightShadows*)
                        jag::graphics::EffectManager::GetEffect<jag::graphics::SunlightDirectLighting>(pEVar7);
                    fVar10 = (float)this_04->GetMean();
                    this_02->SetSunlightShadowStrength(fVar10, 0, 0);
                    local_60._24_8_ = this_02;
                    iVar3 = this_02->GetPos();
                    iVar4 = this_04->GetSpriteID();
                    uVar1 = local_60._24_8_;
                    if (iVar3 != iVar4) {
                        cVar2 = local_60._24_8_->GetPos();
                        pEVar7->DisableEffect(cVar2 + '\x1f');
                        cVar2 = this_04->GetSpriteID();
                        pEVar7->EnableEffect(cVar2 + '\x1f', 1);
                        uVar11 = this_04->GetSpriteID();
                        uVar1->SetQuality(uVar11);
                    }
                }
                PaintRSeven(this_00);
            }
            lVar6 = ((field_32 + (long)(field_0[-3] + -32)))->GetRenderStateNXT();
            if (*(char*)(lVar6 + 19677504) != '\0') {
                (field_112, this_00)->DrawUI();
            }
            this_03 = (fixed_vector<jag::math::Vector2T<float>, 98304ul, true, eastl::allocator>*)((field_112 + 24))
                          ->GetRead();
            eastl::fixed_vector<jag::math::Vector2T<float>, 98304ul, true, eastl::allocator>::reset_lose_memory(
                this_03);
            lVar6 = ((field_32 + (long)(field_0[-3] + -32)))->GetRenderStateNXT();
            *(undefined1*)(lVar6 + 19677506) = 0;
        }
    }

    // 0x1001bd780, 224 bytes, placed by neighbouring functions
    // OSRenderCore_RenderThread_JavaStyle::PaintJavaStyle(render::RenderContext&)
    void OSRenderCore_RenderThread_JavaStyle::PaintJavaStyle(RenderContext* param_1) {
        RenderTargets* pRVar1;
        long lVar2;
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_48[16];
        Vector4T<float> local_38[16];

        if (field_8 != '\0') {
            pRVar1 = (RenderTargets*)(&field_48)->end();
            param_1->SetRenderTargets(pRVar1);
        }
        lVar2 = ((field_16 + *(long*)(field_0 + -24) + -16))->GetRenderStateNXT();
        if (*(char*)(lVar2 + 19677505) == '\0') {
            jag::math::Vector4T<float>::Vector4T(local_38, 0.0);
            param_1->ClearRenderTargets(local_38, 1);
        } else {
            DrawSkybox(this, param_1);
        }
        DrawTriangles(this, param_1);
        if (field_8 != '\0') {
            param_1->SetScissorRectangle(false, 0, 0, 0, 0);
            pRVar1 = (RenderTargets*)param_1->GetBackBuffer();
            new (local_38) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(local_48, (_func_decltype_nullptr*)0);
            param_1->ResolveColourTargetData(pRVar1, 16384, local_38, local_48);
        }
    }

    // 0x1001bd860, 80 bytes, placed by neighbouring functions
    // OSRenderCore_RenderThread_JavaStyle::DrawSkybox(render::RenderContext&)
    void OSRenderCore_RenderThread_JavaStyle::DrawSkybox(RenderContext* param_1) {
        RenderTargets* pRVar1;

        if (field_8 != '\0') {
            pRVar1 = (RenderTargets*)(&field_48)->end();
            param_1->SetRenderTargets(pRVar1);
        }
        param_1->ClearRenderTargets((Vector4T*)(field_16 + *(long*)(field_0 + -24) + 48), 1);
    }

    // 0x1001bd8b0, 2032 bytes, placed by __FILE__ string
    // OSRenderCore_RenderThread_JavaStyle::DrawTriangles(render::RenderContext&)
    void OSRenderCore_RenderThread_JavaStyle::DrawTriangles(RenderContext* param_1) {
        uint uVar1;
        char cVar2;
        int iVar3;
        undefined4 uVar4;
        int iVar5;
        int iVar6;
        int iVar7;
        int iVar8;
        vector<game::LocationAudioProperties, eastl::allocator>* this_00;
        long lVar9;
        RenderPipelineState* this_01;
        compressed_pair_imp<dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>* this_02;
        Viewport* pVVar10;
        RenderTargets* pRVar11;
        OutputMergerState* this_03;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* this_04;
        vector<OSRenderCore_RenderThread_JavaStyle::VertexBufferSection,
               eastl::fixed_vector_allocator<48ul, 128ul, 4ul, 0ul, true, eastl::allocator>>* this_05;
        int* piVar12;
        Layout* this_06;
        uchar* puVar13;
        byte* pbVar14;
        VertexDeclaration* pVVar15;
        VertexBuffer* pVVar16;
        Rect* pRVar17;
        vector* pvVar18;
        float* pfVar19;
        Layout* this_07;
        Minimap* pMVar20;
        Vector2T* pVVar21;
        HashedString* pHVar22;
        undefined1* puVar23;
        DrawCallState* pDVar24;
        uchar* puVar25;
        RenderContext* this_08;
        ShaderProgram* pSVar26;
        bool bVar27;
        undefined8 uVar28;
        float fVar29;
        undefined1 auVar30[16];
        undefined1 local_140[24];
        undefined8 local_128;
        ShaderProgram* local_118;
        uchar* local_110;
        undefined1* local_108;
        undefined1* local_100;
        undefined1* local_f8;
        undefined1* local_f0;
        undefined1* local_e8;
        DrawCallState local_e0;
        Vector2T<int> local_b0[8];
        Vector2T<int> local_a8[8];
        Point<float> local_a0[8];
        ShaderProgram* local_98;
        InputAssemblerState* local_90;
        OSRenderCore_RenderThread_JavaStyle* local_88;
        RenderContext* local_80;
        float local_74;
        float local_70;
        float local_6c;
        float local_68;
        int local_64;
        ulong local_60;
        undefined1 local_58[16];
        ShaderProgram* local_48;
        int local_3c;
        uchar local_35;
        float local_34;

        pMVar20 = (Minimap*)(field_16 + *(long*)(field_0 + -24) + 8);
        local_80 = param_1;
        iVar3 = param_1->GetBackBufferHeight();
        uVar4 = pMVar20->GetPos();
        local_48 = (ShaderProgram*)CONCAT44(local_48._4_4_, uVar4);
        local_3c = pMVar20->GetLevel();
        iVar5 = pMVar20->GetX();
        iVar6 = pMVar20->MaxZ();
        local_64 = iVar3;
        iVar7 = pMVar20->GetPos();
        iVar8 = pMVar20->GetLevel();
        new (local_140) render::Viewport(iVar5, iVar3 - iVar6, iVar7, iVar8, 0.0, 1.0);
        this_00 = (vector<game::LocationAudioProperties, eastl::allocator>*)(&field_4576)->GetRead();
        lVar9 = eastl::vector<game::LocationAudioProperties, eastl::allocator>::size(this_00);
        if (lVar9 != 0) {
            new (&local_e0) render::DrawCallState();
            local_90 = (InputAssemblerState*)&field_4688;
            local_e0.SetInputAssemblerState(local_90);
            pDVar24 = &local_e0;
            this_01 = (RenderPipelineState*)pDVar24->GetRenderPipelineState();
            lVar9 = pDVar24->Instance();
            this_01->SetRasteriserState((RasteriserState*)(lVar9 + 1272));
            pDVar24 = &local_e0;
            this_02 = (compressed_pair_imp<dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>*)
                          pDVar24->GetRenderPipelineState();
            auVar30 = pDVar24->Instance();
            eastl::compressed_pair_imp<dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>::compressed_pair_imp(
                this_02, (EntityHighlight**)(auVar30._0_8_ + 1676), auVar30._8_8_);
            pVVar10 = (Viewport*)local_e0.GetOutputMergerState();
            render::OutputMergerState::SetViewports(pVVar10, (uint)local_140);
            this_08 = local_80;
            if (field_8 == '\0') {
                pRVar11 = (RenderTargets*)local_80->GetBackBuffer();
            } else {
                pRVar11 = (RenderTargets*)(&field_48)->end();
            }
            this_03 = (OutputMergerState*)local_e0.GetOutputMergerState();
            this_03->SetRenderTargets(pRVar11);
            local_118 = (ShaderProgram*)&field_4880;
            SetTriangleShaderUniforms(this, local_118);
            local_98 = (ShaderProgram*)&field_6736;
            SetTriangleShaderUniforms(this, local_98);
            puVar23 = &field_14427080;
            this_04 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)
                          puVar23->GetRead();
            cVar2 =
                eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(
                    this_04);
            if (cVar2 == '\0') {
                this_05 = (vector<OSRenderCore_RenderThread_JavaStyle::VertexBufferSection,
                                  eastl::fixed_vector_allocator<48ul, 128ul, 4ul, 0ul, true, eastl::allocator>>*)
                              puVar23->GetRead();
                piVar12 = (int*)eastl::vector<
                    OSRenderCore_RenderThread_JavaStyle::VertexBufferSection,
                    eastl::fixed_vector_allocator<48ul, 128ul, 4ul, 0ul, true, eastl::allocator>>::operator[](this_05,
                                                                                                              0);
                if (*piVar12 != 5) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("m_vbSections.GetRead().empty() || m_vbSections.GetRead()[0].m_stencilMode == "
                              "StencilMode::UISCENE_TRANSFORM",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/"
                              "osrendercore/OSRenderCore.cpp",
                              1367, (char*)0);
                }
            }
            jag::math::Vector2T<int>::Vector2T(local_b0);
            local_88 = this;
            jag::math::Vector2T<int>::Vector2T(local_a8);
            this_06 = (Layout*)puVar23->GetRead();
            puVar13 = (uchar*)
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(this_06);
            local_110 = (uchar*)this_06->end();
            if (puVar13 != local_110) {
                local_108 = &local_88->field_14439704;
                local_100 = &local_88->field_14439644;
                local_f8 = &local_88->field_14439584;
                fVar29 = (float)(int)local_48;
                local_f0 = &local_88->field_14439524;
                local_68 = (float)local_3c;
                local_e8 = &local_88->field_14439464;
                local_70 = 1.0 / fVar29;
                local_74 = 1.0 / local_68;
                local_60 = 0;
                local_48 = (ShaderProgram*)0;
                local_3c = 0;
                puVar13 = puVar13 + 47;
                local_6c = fVar29;
                do {
                    pSVar26 = local_118;
                    if (*puVar13 != '\0') {
                        uVar28 = GetBrightnessAdjustedHSL();
                        local_34 = fVar29;
                        local_128 = uVar28;
                        new (local_58) HashedString("uTintHSL_Weight");
                        pSVar26 = local_98;
                        iVar3 = local_98->GetConstIndex(local_58);
                        local_a0[0] = (Point<float>)0;
                        local_35 = 128;
                        pbVar14 = std::clamp<unsigned char>(puVar13, (uchar*)local_a0, &local_35);
                        pSVar26->SetShaderConstFloat4(iVar3, (float)local_128, local_128._4_4_, local_34,
                                                      (float)*pbVar14 * 0.0078125);
                        new (local_58) HashedString("uTintHSL_Mask");
                        pSVar26 = local_98;
                        iVar3 = local_98->GetConstIndex(local_58);
                        pSVar26->SetShaderConstInt3(iVar3, (uint)(puVar13[-3] != 255), (uint)(puVar13[-2] != 255),
                                                    (uint)(puVar13[-1] != 255));
                    }
                    if (pSVar26 != local_48) {
                        SetTriangleShader(local_88, pSVar26, &local_e0);
                        pVVar15 = (VertexDeclaration*)pSVar26->second();
                        pVVar16 = (VertexBuffer*)eastl::vector<render::VertexBuffer, eastl::allocator>::operator[](
                            (vector<render::VertexBuffer, eastl::allocator>*)this_00, local_60 & 4294967295);
                        local_90->SetVertexStreamData(pVVar15, pVVar16);
                        local_48 = pSVar26;
                    }
                    if (*(int*)(puVar13 + -47) == 5) {
                        pVVar10 = (Viewport*)local_e0.GetOutputMergerState();
                        render::OutputMergerState::SetViewports(pVVar10, (uint)local_140);
                        iVar3 = *(int*)(puVar13 + -27);
                        jag::math::Point<float>::Point(local_a0, local_70, local_74);
                        local_58._0_8_ = jag::math::operator*((double)iVar3 + (double)iVar3, (Vector2T*)local_a0);
                        jag::math::Vector2T<float>::operator=((Vector2T<float>*)local_b0, (Vector2T*)local_58);
                        fVar29 = (float)(*(int*)(puVar13 + -31) * -2) / local_68;
                        new (local_58) jag::math::Point<float>((float)(*(int*)(puVar13 + -35) * 2) / local_6c, fVar29);
                        pVVar21 = (Vector2T*)local_58;
                        jag::math::Vector2T<float>::operator=((Vector2T<float>*)local_a8, (Vector2T*)local_58);
                        new (local_58) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(pVVar21);
                        pMVar20 = (Minimap*)(puVar13 + -19);
                        iVar3 = pMVar20->GetPos();
                        if (iVar3 < 0) {
                            pRVar17 = (Rect*)local_e0.GetOutputMergerState();
                            render::OutputMergerState::SetScissorRects(pRVar17, (uint)local_58);
                        } else {
                            local_34 = (float)pMVar20->GetX();
                            iVar3 = pMVar20->MaxZ();
                            iVar3 = local_64 - iVar3;
                            iVar5 = pMVar20->GetPos();
                            iVar6 = pMVar20->GetLevel();
                            this_08 = local_80;
                            new (local_58) dash3d::GridRect((int)local_34, iVar3, iVar5, iVar6);
                            pRVar17 = (Rect*)local_e0.GetOutputMergerState();
                            render::OutputMergerState::SetScissorRects(pRVar17, (uint)local_58);
                        }
                    } else {
                        new (local_58) HashedString("uInvViewportSize");
                        pHVar22 = (HashedString*)local_58;
                        iVar3 = local_48->GetConstIndex(pHVar22);
                        pvVar18 = local_b0->SSOBeginPtr(pHVar22);
                        local_34 = *(float*)pvVar18;
                        pfVar19 = (float*)local_b0->y();
                        local_48->SetShaderConstFloat2(iVar3, local_34, *pfVar19);
                        new (local_58) HashedString("uOriginShift");
                        pHVar22 = (HashedString*)local_58;
                        iVar3 = local_48->GetConstIndex(pHVar22);
                        pvVar18 = local_a8->SSOBeginPtr(pHVar22);
                        local_34 = *(float*)pvVar18;
                        pfVar19 = (float*)local_a8->y();
                        fVar29 = *pfVar19;
                        local_48->SetShaderConstFloat2(iVar3, local_34, fVar29);
                        uVar1 = *(uint*)(puVar13 + -43);
                        bVar27 = uVar1 != (uint)local_60;
                        if (bVar27) {
                            pVVar15 = (VertexDeclaration*)local_48->second();
                            pVVar16 = (VertexBuffer*)eastl::vector<render::VertexBuffer, eastl::allocator>::operator[](
                                (vector<render::VertexBuffer, eastl::allocator>*)this_00, (ulong)uVar1);
                            local_3c = 0;
                            local_90->SetVertexStreamData(pVVar15, pVVar16);
                            local_60 = (ulong)uVar1;
                        }
                        switch (*(undefined4*)(puVar13 + -47)) {
                        case 0:
                            this_07 = (Layout*)local_e0.GetRenderPipelineState();
                            puVar23 = local_e8;
                            break;
                        case 1:
                            this_07 = (Layout*)local_e0.GetRenderPipelineState();
                            puVar23 = local_f0;
                            break;
                        case 2:
                            this_07 = (Layout*)local_e0.GetRenderPipelineState();
                            puVar23 = local_f8;
                            break;
                        case 3:
                            this_07 = (Layout*)local_e0.GetRenderPipelineState();
                            puVar23 = local_100;
                            break;
                        case 4:
                            this_07 = (Layout*)local_e0.GetRenderPipelineState();
                            puVar23 = local_108;
                            break;
                        default:
                            goto switchD_1001bdf41_default;
                        }
                        eastl::basic_string<
                            char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::Layout::
                            SetHeapSize(this_07, (ulong)puVar23);
                    switchD_1001bdf41_default:
                        this_08->BindDrawCallState(&local_e0);
                        if (*(int*)(puVar13 + -47) - 1U < 2) {
                            this_08->ClearDepthStencilTarget(0.0, 0, 4);
                        }
                        this_08->DrawPrimitives(4, local_3c, *(undefined4*)(puVar13 + -39));
                        local_3c = local_3c + *(int*)(puVar13 + -39);
                    }
                    puVar25 = puVar13 + 1;
                    puVar13 = puVar13 + 48;
                } while (puVar25 != local_110);
            }
            local_e0.~DrawCallState();
        }
    }

    // 0x1001be0a0, 352 bytes, placed by neighbouring functions
    // OSRenderCore_RenderThread_JavaStyle::GetBrightnessAdjustedHSL(signed char, signed char, signed char)
    void OSRenderCore_RenderThread_JavaStyle::GetBrightnessAdjustedHSL(undefined8 param_1, signed param_2,
                                                                       signed param_3, signed param_4) {
        signed sVar1;
        signed sVar2;
        ushort uVar3;
        uint uVar4;
        signed* psVar5;
        float fVar6;
        signed local_60[16];
        ulong local_50;
        float local_48;
        ulong local_40;
        float local_38;
        ColourHSL local_30;
        signed local_1d;
        signed local_1c;
        signed local_1b;
        signed local_1a;
        signed local_19;

        local_1b = param_2;
        if (param_2 == (signed)255) {
            local_1b = (signed)63;
        }
        local_1a = param_3;
        if (param_3 == (signed)255) {
            local_1a = (signed)7;
        }
        local_19 = param_4;
        if (param_4 == (signed)255) {
            local_19 = (signed)63;
        }
        local_50 = local_50 & 18446744073709551360;
        local_30.field_0._0_1_ = 63;
        psVar5 = std::clamp<signed char>(&local_1b, (signed*)&local_50, (signed*)&local_30);
        sVar1 = *psVar5;
        local_40 = local_40 & 18446744073709551360;
        local_60[0] = (signed)7;
        psVar5 = std::clamp<signed char>(&local_1a, (signed*)&local_40, local_60);
        sVar2 = *psVar5;
        local_1d = (signed)0;
        local_1c = (signed)127;
        psVar5 = std::clamp<signed char>(&local_19, &local_1d, &local_1c);
        uVar3 = jag::math::RunetekColour::PackHSL((int)(char)sVar1, (int)(char)sVar2, (int)(char)*psVar5);
        uVar4 = jag::math::RunetekColour::HSLToRGB(uVar3);
        fVar6 = (float)(uVar4 >> 8 & 255);
        new (&local_30) jag::math::ColourHSL((float)(uVar4 >> 16 & 255), fVar6, (float)(uVar4 & 255));
        local_50 = jag::math::operator/((Vector3T*)&local_30, 256.0);
        local_48 = fVar6;
        local_40 = jag::math::operator*(1.03, (Vector3T*)&local_50);
        local_38 = fVar6;
        new (local_60) jag::math::Vector3T<float>(0.035);
        local_30._0_8_ = jag::math::operator+((Vector3T*)&local_40, (Vector3T*)local_60);
        local_30.field_8 = fVar6;
        local_50.SetXYZ((Vector3T*)&local_30);
        jag::math::RGBToHSL((Vector3T*)&local_50);
    }

    // 0x1001be270, 816 bytes, placed by __FILE__ string
    // OSRenderCore_RenderThread::UpdateRenderTargetSizes(render::RenderContext const&)
    void OSRenderCore_RenderThread::UpdateRenderTargetSizes(RenderContext* param_1) {
        undefined1* this_00;
        TextureRenderBuffer* this_01;
        shared_ptr* this_02;
        undefined8 this_03;
        bool bVar1;
        char cVar2;
        int iVar3;
        int iVar4;
        int* piVar5;
        long lVar6;
        Texture* this_04;
        vector* pvVar7;
        undefined4* puVar8;
        RenderTargets* pRVar9;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>* this_05;
        undefined8* puVar10;
        RT7Core* pRVar11;
        Vector2T* pVVar12;
        type* ptVar13;
        TextureRenderBuffer* this_06;
        undefined1 local_d8[68];
        undefined4 local_94;
        int local_8c;
        undefined4 local_88;
        undefined4 local_80;
        undefined1 local_78;
        shared_ptr local_58;
        undefined1 local_48[16];
        Vector2T local_38[8];

        iVar3 = param_1->GetBackBufferWidth();
        iVar4 = param_1->GetBackBufferHeight();
        new (local_38) sidebars::SideBarData(iVar3, iVar4);
        this_01 = (TextureRenderBuffer*)(field_1580384 + 48);
        piVar5 = (int*)this_01->second();
        iVar3 = *piVar5;
        lVar6 = this_01->second();
        new (local_48) sidebars::SideBarData(iVar3, *(int*)(lVar6 + 4));
        if (*(int*)(field_112 + (long)(field_0[-3] + -8)) == 1) {
            this_00 = &field_8;
            pRVar11 =
                (RT7Core*)
                    std::unique_ptr<jag::graphics::RT7Core, std::default_delete<jag::graphics::RT7Core>>::operator->(
                        (unique_ptr<jag::graphics::RT7Core, std::default_delete<jag::graphics::RT7Core>>*)this_00);
            piVar5 = (int*)pRVar11->GetMSAASampleCount();
            if (*piVar5 != *(int*)(field_32 + (long)(field_0[-3] + 16))) {
                pRVar11 =
                    (RT7Core*)std::unique_ptr<jag::graphics::RT7Core, std::default_delete<jag::graphics::RT7Core>>::
                    operator->(
                        (unique_ptr<jag::graphics::RT7Core, std::default_delete<jag::graphics::RT7Core>>*)this_00);
                pRVar11->DestroyRenderTargets();
                pRVar11 =
                    (RT7Core*)std::unique_ptr<jag::graphics::RT7Core, std::default_delete<jag::graphics::RT7Core>>::
                    operator->(
                        (unique_ptr<jag::graphics::RT7Core, std::default_delete<jag::graphics::RT7Core>>*)this_00);
                pRVar11->InitRenderTargets(*(int*)(field_32 + (long)(field_0[-3] + 16)));
            }
        } else if ((*(int*)(field_112 + (long)(field_0[-3] + -8)) == 0) && (field_1580376 != '\0')) {
            pVVar12 = (Vector2T*)local_48;
            bVar1 = jag::math::operator!=(local_38, pVVar12);
            if ((bVar1) || (iVar3 = *(int*)(field_32 + (long)(field_0[-3] + 16)), lVar6 = this_01->second(),
                            iVar3 != *(int*)(lVar6 + 16))) {
                this_04 = (Texture*)((field_112 + 1578944))->GetWrite();
                cVar2 = this_04->IsCreated();
                if (cVar2 == '\0') {
                    /* WARNING: Subroutine does not return */
                    LogAssert("m_textureUI.GetWrite().IsCreated()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/"
                              "osrendercore/OSRenderCore.cpp",
                              704, "Call SetUISize before SetScreenSize");
                }
                this_02 = (shared_ptr*)(field_1580384 + 32);
                render::RenderTargets::SafeReset(this_02);
                this_01->Destroy();
                local_48._8_8_ = &field_1580944;
                local_48._8_8_->Destroy();
                render::RenderTargets::SafeReset((shared_ptr*)field_1581456);
                (&field_1581472)->Destroy();
                new ((local_d8 + 64)) render::Texture::Desc();
                pvVar7 = local_38->SSOBeginPtr(pVVar12);
                local_d8._64_4_ = *(undefined4*)pvVar7;
                puVar8 = (undefined4*)local_38->y();
                this_03 = local_48._8_8_;
                local_94 = *puVar8;
                local_80 = 1;
                local_78 = 0;
                local_88 = *(undefined4*)(field_32 + (long)(field_0[-3] + 16));
                pRVar9 = (RenderTargets*)param_1->GetBackBuffer();
                this_05 = (vector<render::Texture*,
                                  eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                              pRVar9->GetColourTargetTextures();
                ptVar13 = (type*)0;
                puVar10 = (undefined8*)eastl::vector<
                    render::Texture*,
                    eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](this_05, 0);
                lVar6 = (*puVar10)->second();
                local_8c = (uint)(*(int*)(lVar6 + 12) != 7) * 9 + 7;
                new (local_d8) render::Texture::Desc();
                pvVar7 = local_38->SSOBeginPtr(ptVar13);
                local_d8._0_4_ = *(undefined4*)pvVar7;
                piVar5 = (int*)local_38->y();
                local_d8._4_4_ = *piVar5;
                local_d8._16_4_ = local_88;
                local_d8._24_4_ = 0;
                local_d8[32] = 0;
                local_d8._12_4_ = 14;
                this_01->Create((Desc*)(local_d8 + 64));
                this_06 = (TextureRenderBuffer*)this_03;
                this_03->Create(local_d8);
                lVar6 = this_06->Instance();
                this_01->SetSamplerState((SamplerState*)(lVar6 + 80), false);
                make_shared<render::RenderTargets>((jag*)&local_58);
                shared_ptr<render::RenderTargets>::operator=((shared_ptr<render::RenderTargets>*)this_02, &local_58);
                local_58.~shared_ptr();
                pRVar9 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                    (shared_ptr<render::RenderTargets>*)this_02);
                pRVar9->Create("", 0);
                pRVar9 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                    (shared_ptr<render::RenderTargets>*)this_02);
                pRVar9->BindColourTargetTexture(this_01, 0, 0, 34069);
                pRVar9 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                    (shared_ptr<render::RenderTargets>*)this_02);
                pRVar9->BindDepthStencilTargetTexture(this_03);
            }
        }
    }

    // 0x1001beee0, 576 bytes, placed by __FILE__ string
    // OSRenderCore_RenderThread_UI::UploadUIRect(unsigned int*, int, int, int, int)
    void OSRenderCore_RenderThread_UI::UploadUIRect(uint* param_1, int param_2, int param_3, int param_4, int param_5) {
        compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                    eastl::allocator>>::Layout,
                            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>* pcVar1;
        int* piVar2;
        long lVar3;
        vector<jag::math::Vector2T<float>,
               eastl::fixed_vector_allocator<8ul, 98304ul, 4ul, 0ul, true, eastl::allocator>>* pvVar4;
        RoundRobin<eastl::fixed_vector<jag::math::Vector2T<float>, 98304ul, true, eastl::allocator>, 2ul>* this_00;
        int iVar5;
        uint uVar6;
        float fVar7;
        float local_50;
        float local_4c;
        float local_48;
        float local_44;
        int local_40;
        int local_3c;
        int local_38;
        int local_34;

        local_3c = param_4;
        local_38 = param_2;
        if (*(char*)&this[1].field_0 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_usePixelBuffers",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/osrendercore/"
                      "OSRenderCore.cpp",
                      475, "UploadUIRect() only valid when using pixel buffers");
        }
        if (field_1580240 == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_uiPixelData",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/osrendercore/"
                      "OSRenderCore.cpp",
                      476, "UI PBO returned null");
        }
        pcVar1 =
            (compressed_pair_imp<
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::Layout,
                eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>*)(&field_1578944)
                ->GetWrite();
        piVar2 = (int*)eastl::compressed_pair_imp<
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::Layout,
            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>::second(pcVar1);
        local_34 = *piVar2;
        pcVar1 =
            (compressed_pair_imp<
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::Layout,
                eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>*)(&field_1578944)
                ->GetWrite();
        lVar3 = eastl::compressed_pair_imp<
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::Layout,
            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>::second(pcVar1);
        local_40 = *(int*)(lVar3 + 4);
        if (0 < param_5) {
            lVar3 = (long)local_3c;
            uVar6 = local_34 * param_3 + local_38;
            iVar5 = param_3;
            do {
                _memmove((void*)((ulong)uVar6 * 4 + field_1580240), param_1 + uVar6, lVar3 << 2);
                iVar5 = iVar5 + 1;
                uVar6 = uVar6 + local_34;
            } while (iVar5 < param_3 + param_5);
        }
        fVar7 = (float)local_40;
        local_50 = (float)local_38 * (1.0 / (float)local_34);
        local_4c = (fVar7 - (float)param_3) * (1.0 / fVar7);
        local_48 = (float)local_3c * (1.0 / (float)local_34) + local_50;
        local_44 = (fVar7 - (float)(param_3 + param_5)) * (1.0 / fVar7);
        this_00 = (RoundRobin<eastl::fixed_vector<jag::math::Vector2T<float>, 98304ul, true, eastl::allocator>,
                              2ul>*)(field_8 + 16);
        pvVar4 =
            (vector<jag::math::Vector2T<float>,
                    eastl::fixed_vector_allocator<8ul, 98304ul, 4ul, 0ul, true, eastl::allocator>>*)this_00->GetWrite();
        eastl::vector<jag::math::Vector2T<float>,
                      eastl::fixed_vector_allocator<8ul, 98304ul, 4ul, 0ul, true, eastl::allocator>>::
            emplace_back<float&, float&>(pvVar4, &local_50, &local_4c);
        pvVar4 =
            (vector<jag::math::Vector2T<float>,
                    eastl::fixed_vector_allocator<8ul, 98304ul, 4ul, 0ul, true, eastl::allocator>>*)this_00->GetWrite();
        eastl::vector<jag::math::Vector2T<float>,
                      eastl::fixed_vector_allocator<8ul, 98304ul, 4ul, 0ul, true, eastl::allocator>>::
            emplace_back<float&, float&>(pvVar4, &local_50, &local_44);
        pvVar4 =
            (vector<jag::math::Vector2T<float>,
                    eastl::fixed_vector_allocator<8ul, 98304ul, 4ul, 0ul, true, eastl::allocator>>*)this_00->GetWrite();
        eastl::vector<jag::math::Vector2T<float>,
                      eastl::fixed_vector_allocator<8ul, 98304ul, 4ul, 0ul, true, eastl::allocator>>::
            emplace_back<float&, float&>(pvVar4, &local_48, &local_44);
        pvVar4 =
            (vector<jag::math::Vector2T<float>,
                    eastl::fixed_vector_allocator<8ul, 98304ul, 4ul, 0ul, true, eastl::allocator>>*)this_00->GetWrite();
        eastl::vector<jag::math::Vector2T<float>,
                      eastl::fixed_vector_allocator<8ul, 98304ul, 4ul, 0ul, true, eastl::allocator>>::
            emplace_back<float&, float&>(pvVar4, &local_50, &local_4c);
        pvVar4 =
            (vector<jag::math::Vector2T<float>,
                    eastl::fixed_vector_allocator<8ul, 98304ul, 4ul, 0ul, true, eastl::allocator>>*)this_00->GetWrite();
        eastl::vector<jag::math::Vector2T<float>,
                      eastl::fixed_vector_allocator<8ul, 98304ul, 4ul, 0ul, true, eastl::allocator>>::
            emplace_back<float&, float&>(pvVar4, &local_48, &local_44);
        pvVar4 =
            (vector<jag::math::Vector2T<float>,
                    eastl::fixed_vector_allocator<8ul, 98304ul, 4ul, 0ul, true, eastl::allocator>>*)this_00->GetWrite();
        eastl::vector<jag::math::Vector2T<float>,
                      eastl::fixed_vector_allocator<8ul, 98304ul, 4ul, 0ul, true, eastl::allocator>>::
            emplace_back<float&, float&>(pvVar4, &local_48, &local_4c);
    }

    // 0x1001bf1c0, 272 bytes, placed by __FILE__ string
    // OSRenderCore_RenderThread_UI::ClearUIRect(int, int, int, int)
    void OSRenderCore_RenderThread_UI::ClearUIRect(int param_1, int param_2, int param_3, int param_4) {
        int iVar1;
        compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                    eastl::allocator>>::Layout,
                            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>* this_00;
        int* piVar2;
        int iVar3;
        uint uVar4;

        if (*(char*)&this[1].field_0 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_usePixelBuffers",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/osrendercore/"
                      "OSRenderCore.cpp",
                      507, "ClearUIRect() only valid when using pixel buffers");
        }
        if (field_1580240 == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_uiPixelData",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/osrendercore/"
                      "OSRenderCore.cpp",
                      508, "UI PBO returned null");
        }
        this_00 =
            (compressed_pair_imp<
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::Layout,
                eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>*)(&field_1578944)
                ->GetWrite();
        piVar2 = (int*)eastl::compressed_pair_imp<
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::Layout,
            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>::second(this_00);
        if (0 < param_4) {
            iVar1 = *piVar2;
            iVar3 = param_4 + param_2;
            uVar4 = param_1 + iVar1 * param_2;
            do {
                ___bzero((ulong)uVar4 * 4 + field_1580240, (long)param_3 << 2);
                param_2 = param_2 + 1;
                uVar4 = uVar4 + iVar1;
            } while (param_2 < iVar3);
        }
    }

    // 0x1001bf2d0, 848 bytes, placed by neighbouring functions
    // OSRenderCore_RenderThread_UI::UploadUI(unsigned int*)
    void OSRenderCore_RenderThread_UI::UploadUI(uint* param_1) {
        undefined1* this_00;
        uint uVar1;
        int iVar2;
        compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                    eastl::allocator>>::Layout,
                            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>* pcVar3;
        uint* puVar4;
        long lVar5;
        vector<unsigned char, eastl::fixed_vector_allocator<1ul, 8ul, 1ul, 0ul, true, eastl::allocator>>* this_01;
        bool* pbVar6;
        bool* pbVar7;
        int* piVar8;
        uint* puVar9;
        undefined8 uVar10;
        char* pcVar11;
        long* plVar12;
        vector<jag::math::Vector2T<float>,
               eastl::fixed_vector_allocator<8ul, 98304ul, 4ul, 0ul, true, eastl::allocator>>* pvVar13;
        char cVar14;
        uint uVar15;
        ulong uVar16;
        uint uVar17;
        RoundRobin<eastl::fixed_vector<jag::math::Vector2T<float>, 98304ul, true, eastl::allocator>, 2ul>* this_02;
        int iVar18;
        int iVar19;
        ulong uVar20;
        float local_60;
        float local_5c;
        float local_58;
        int local_54;
        int local_50;
        int local_4c;
        char* local_48;
        long local_40;
        float local_34;

        this_00 = &field_1578944;
        pcVar3 =
            (compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                         eastl::allocator>>::Layout,
                                 eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>*)
                this_00->GetRead();
        puVar4 = (uint*)eastl::compressed_pair_imp<
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::Layout,
            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>::second(pcVar3);
        uVar17 = *puVar4;
        pcVar3 =
            (compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                         eastl::allocator>>::Layout,
                                 eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>*)
                this_00->GetRead();
        lVar5 = eastl::compressed_pair_imp<
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::Layout,
            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>::second(pcVar3);
        uVar1 = *(uint*)(lVar5 + 4);
        local_4c = 32;
        if (*(char*)&this[1].field_0 == '\0') {
            plVar12 = (long*)this_00->GetWrite();
            (**(code**)(*plVar12 + 40))(plVar12, 0, 0, 0, uVar17, uVar1, 29, param_1);
            local_34 = 0.0;
            local_60 = 0.0;
            local_5c = 1.0;
            local_58 = 1.0;
            this_02 = (RoundRobin<eastl::fixed_vector<jag::math::Vector2T<float>, 98304ul, true, eastl::allocator>,
                                  2ul>*)(field_8 + 16);
            pvVar13 = (vector<jag::math::Vector2T<float>,
                              eastl::fixed_vector_allocator<8ul, 98304ul, 4ul, 0ul, true, eastl::allocator>>*)
                          this_02->GetWrite();
            eastl::vector<jag::math::Vector2T<float>,
                          eastl::fixed_vector_allocator<8ul, 98304ul, 4ul, 0ul, true, eastl::allocator>>::
                emplace_back<float&, float&>(pvVar13, &local_34, &local_60);
            pvVar13 = (vector<jag::math::Vector2T<float>,
                              eastl::fixed_vector_allocator<8ul, 98304ul, 4ul, 0ul, true, eastl::allocator>>*)
                          this_02->GetWrite();
            eastl::vector<jag::math::Vector2T<float>,
                          eastl::fixed_vector_allocator<8ul, 98304ul, 4ul, 0ul, true, eastl::allocator>>::
                emplace_back<float&, float&>(pvVar13, &local_34, &local_58);
            pvVar13 = (vector<jag::math::Vector2T<float>,
                              eastl::fixed_vector_allocator<8ul, 98304ul, 4ul, 0ul, true, eastl::allocator>>*)
                          this_02->GetWrite();
            eastl::vector<jag::math::Vector2T<float>,
                          eastl::fixed_vector_allocator<8ul, 98304ul, 4ul, 0ul, true, eastl::allocator>>::
                emplace_back<float&, float&>(pvVar13, &local_5c, &local_58);
            pvVar13 = (vector<jag::math::Vector2T<float>,
                              eastl::fixed_vector_allocator<8ul, 98304ul, 4ul, 0ul, true, eastl::allocator>>*)
                          this_02->GetWrite();
            eastl::vector<jag::math::Vector2T<float>,
                          eastl::fixed_vector_allocator<8ul, 98304ul, 4ul, 0ul, true, eastl::allocator>>::
                emplace_back<float&, float&>(pvVar13, &local_34, &local_60);
            pvVar13 = (vector<jag::math::Vector2T<float>,
                              eastl::fixed_vector_allocator<8ul, 98304ul, 4ul, 0ul, true, eastl::allocator>>*)
                          this_02->GetWrite();
            eastl::vector<jag::math::Vector2T<float>,
                          eastl::fixed_vector_allocator<8ul, 98304ul, 4ul, 0ul, true, eastl::allocator>>::
                emplace_back<float&, float&>(pvVar13, &local_5c, &local_58);
            pvVar13 = (vector<jag::math::Vector2T<float>,
                              eastl::fixed_vector_allocator<8ul, 98304ul, 4ul, 0ul, true, eastl::allocator>>*)
                          this_02->GetWrite();
            eastl::vector<jag::math::Vector2T<float>,
                          eastl::fixed_vector_allocator<8ul, 98304ul, 4ul, 0ul, true, eastl::allocator>>::
                emplace_back<float&, float&>(pvVar13, &local_5c, &local_60);
        } else {
            this_01 =
                (vector<unsigned char,
                        eastl::fixed_vector_allocator<1ul, 8ul, 1ul, 0ul, true, eastl::allocator>>*)(&field_1580160)
                    ->GetWrite();
            uVar15 = uVar17 + 31;
            if (-1 < (int)uVar17) {
                uVar15 = uVar17;
            }
            local_50 = (((int)uVar15 >> 5) + 1) - (uint)((uVar17 & 31) == 0);
            uVar15 = uVar1 + 31;
            if (-1 < (int)uVar1) {
                uVar15 = uVar1;
            }
            iVar18 = ((((int)uVar15 >> 5) + 1) - (uint)((uVar1 & 31) == 0)) * local_50;
            local_40 = (long)(int)uVar17;
            iVar2 =
                eastl::vector<unsigned char,
                              eastl::fixed_vector_allocator<1ul, 8ul, 1ul, 0ul, true, eastl::allocator>>::size(this_01);
            if (iVar18 != iVar2) {
                eastl::vector<bool, eastl::allocator>::resize((ulong)this_01);
                pbVar6 = (bool*)this_01->HeapBeginPtr();
                pbVar7 = (bool*)this_01->end();
                local_34 = (float)CONCAT31(local_34._1_3_, 1);
                eastl::fill<bool*, bool>(pbVar6, pbVar7, (bool*)&local_34);
            }
            if (0 < (int)uVar1) {
                uVar17 = 0;
                do {
                    local_34 = (float)(uVar1 - uVar17);
                    piVar8 = std::min<int>((int*)&local_34, &local_4c);
                    if (0 < (int)local_40) {
                        local_54 = (uVar17 >> 5) * local_50;
                        iVar2 = *piVar8;
                        uVar20 = 0;
                        puVar4 = param_1;
                        do {
                            iVar19 = (int)uVar20;
                            local_34 = (float)((int)local_40 - iVar19);
                            puVar9 = (uint*)std::min<int>((int*)&local_34, &local_4c);
                            iVar18 = 0;
                            uVar15 = *puVar9;
                            if (iVar2 < 1) {
                                local_48 = (char*)0;
                            } else {
                                local_48 = (char*)0;
                                lVar5 = local_40;
                                do {
                                    if (0 < (int)uVar15) {
                                        uVar16 = 0;
                                        do {
                                            if (puVar4[(long)(int)((uVar17 + iVar18) * (int)lVar5) + uVar16] != 0) {
                                                uVar10 = UploadUIRect(this, param_1, iVar19, uVar17, uVar15, iVar2);
                                                iVar18 = 32;
                                                local_48 = (char*)CONCAT71((int7)((ulong)uVar10 >> 8), 1);
                                                lVar5 = local_40;
                                                break;
                                            }
                                            uVar16 = uVar16 + 1;
                                        } while (uVar15 != uVar16);
                                    }
                                    iVar18 = iVar18 + 1;
                                } while (iVar18 < iVar2);
                            }
                            pcVar11 = (char*)eastl::vector<bool, eastl::allocator>::operator[](
                                (vector<bool, eastl::allocator>*)this_01, (long)((int)(uVar20 >> 5) + local_54));
                            cVar14 = '\x01';
                            if (((ulong)local_48 & 1) == 0) {
                                if (*pcVar11 != '\0') {
                                    local_48 = pcVar11;
                                    ClearUIRect(this, iVar19, uVar17, uVar15, iVar2);
                                    cVar14 = '\0';
                                    pcVar11 = local_48;
                                    goto LAB_1001bf430;
                                }
                            } else {
                            LAB_1001bf430:
                                *pcVar11 = cVar14;
                            }
                            uVar20 = uVar20 + 32;
                            puVar4 = puVar4 + 32;
                        } while ((long)uVar20 < local_40);
                    }
                    uVar17 = uVar17 + 32;
                } while ((int)uVar17 < (int)uVar1);
            }
        }
    }

    // 0x1001bf6e0, 64 bytes, placed by neighbouring functions
    // OSRenderCore_RenderThread_JavaStyle::UploadTexture(unsigned char, unsigned char const*)
    void OSRenderCore_RenderThread_JavaStyle::UploadTexture(uchar param_1, uchar* param_2) {
        (&field_2128, 0, ((byte)(param_1 + 1) & 15) << 7, ((byte)(param_1 + 1) & 240) << 3, 128, 128, 29, param_2)
            ->Update();
    }

    // 0x1001bf720, 80 bytes, placed by neighbouring functions
    // OSRenderCore_RenderThread_JavaStyle::UploadColTab(unsigned char const*)
    void OSRenderCore_RenderThread_JavaStyle::UploadColTab(uchar* param_1) {
        undefined4 uVar1;
        undefined4* puVar2;
        long lVar3;
        undefined1* this_00;

        this_00 = &field_1616;
        puVar2 = (undefined4*)this_00->second();
        uVar1 = *puVar2;
        lVar3 = this_00->second();
        this_00->Update(0, 0, 0, uVar1, *(undefined4*)(lVar3 + 4), 29, param_1);
    }

    // 0x1001bf770, 32 bytes, placed by neighbouring functions
    // OSRenderCore_RenderThread_Common::ShowUI(bool)
    void OSRenderCore_RenderThread_Common::ShowUI(bool param_1) {
        long lVar1;

        lVar1 = GetRenderStateNXT(this);
        *(bool*)(lVar1 + 19677504) = param_1;
    }

    // 0x1001bf790, 48 bytes, placed by neighbouring functions
    // OSRenderCore_RenderThread::SetSkyboxColour(jag::math::Vector4T<float>)
    void OSRenderCore_RenderThread::SetSkyboxColour(undefined8 param_1, undefined8 param_2, long* param_3) {
        undefined8 local_18;
        undefined8 uStack_10;

        local_18 = param_1;
        uStack_10 = param_2;
        jag::math::Rect<float>::operator=((Rect<float>*)((long)param_3 + *(long*)(*param_3 + -24) + 64),
                                          (Rect*)&local_18);
    }

    // 0x1001bf7c0, 32 bytes, placed by neighbouring functions
    // OSRenderCore_RenderThread_Common::ShowSkybox(bool)
    void OSRenderCore_RenderThread_Common::ShowSkybox(bool param_1) {
        long lVar1;

        lVar1 = GetRenderStateNXT(this);
        *(bool*)(lVar1 + 19677505) = param_1;
    }

    // 0x1001bf7e0, 32 bytes, placed by neighbouring functions
    // OSRenderCore_RenderThread::SetFogParams(float, float)
    void OSRenderCore_RenderThread::SetFogParams(float param_1, float param_2) {
        undefined** ppuVar1;

        ppuVar1 = field_0;
        *(float*)(field_32 + (long)(ppuVar1[-3] + 48)) = param_1;
        *(float*)(field_32 + (long)(ppuVar1[-3] + 52)) = param_2;
    }

    // 0x1001bf800, 16 bytes, placed by neighbouring functions
    // OSRenderCore_RenderThread_UI::SetScaledUIQuality(ScaledUIQuality)
    void OSRenderCore_RenderThread_UI::SetScaledUIQuality(int param_2) {
        m_scaledUIQuality = param_2;
    }

    // 0x1001bf810, 464 bytes, placed by neighbouring functions
    // OSRenderCore_RenderThread_UI::SetUISize(unsigned int, unsigned int)
    void OSRenderCore_RenderThread_UI::SetUISize(uint param_1, uint param_2) {
        undefined8 uVar1;
        char cVar2;
        int iVar3;
        uint uVar4;
        Texture2D* this_00;
        Texture2D* pTVar5;
        uint* puVar6;
        long lVar7;
        BufferInterface* this_01;
        BufferInterface* pBVar8;
        long lVar9;
        Texture2D* this_02;
        uint uVar10;
        undefined1* this_03;
        undefined1 local_78[72];

        local_78._64_8_ = this;
        this_00 = (Texture2D*)(&field_1578944)->begin();
        pTVar5 = (Texture2D*)(&field_1578944)->end();
        if (this_00 != pTVar5) {
            do {
                cVar2 = this_00->IsCreated();
                if (((cVar2 == '\0') || (puVar6 = (uint*)this_00->second(), *puVar6 != param_1)) ||
                    (lVar7 = this_00->second(), *(uint*)(lVar7 + 4) != param_2)) {
                    new (local_78) render::Texture::Desc();
                    local_78._12_4_ = 29;
                    local_78._24_4_ = 1;
                    local_78[32] = 0;
                    local_78._0_4_ = param_1;
                    local_78._4_4_ = param_2;
                    cVar2 = this_00->IsCreated();
                    if (cVar2 != '\0') {
                        (*(code*)this_00->field_0[2])(this_00);
                    }
                    this_02 = this_00;
                    this_00->Create(local_78, 0, 0);
                    lVar7 = this_02->Instance();
                    (*(code*)this_00->field_0[3])(this_00, lVar7 + 80, 0);
                }
                this_00 = (Texture2D*)this_00[1].field_8;
            } while (this_00 != pTVar5);
        }
        uVar1 = local_78._64_8_;
        if (*(char*)&((OSRenderCore_RenderThread_UI*)(local_78._64_8_ + 1580248))->field_0 != '\0') {
            iVar3 = render::GetFormatByteCount(29);
            this_01 = (BufferInterface*)((uVar1 + 1579984))->begin();
            pBVar8 = (BufferInterface*)((uVar1 + 1579984))->end();
            if (this_01 != pBVar8) {
                uVar10 = param_2 * param_1 * iVar3;
                do {
                    cVar2 = this_01->IsCreated();
                    if ((cVar2 == '\0') || (uVar4 = this_01->GetAliveCount(), uVar4 != uVar10)) {
                        cVar2 = this_01->IsCreated();
                        if (cVar2 != '\0') {
                            this_01->Destroy();
                        }
                        this_01->Create(uVar10, 1, 0);
                    }
                    this_01 = this_01 + 1;
                } while (this_01 != pBVar8);
            }
            this_03 = (undefined1*)(local_78._64_8_ + 1580160);
            lVar7 = this_03->begin();
            lVar9 = this_03->end();
            for (; lVar7 != lVar9; lVar7 = lVar7 + 32) {
                eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
            }
        }
    }

    // 0x1001bfa60, 32 bytes, placed by neighbouring functions
    // OSRenderCore_RenderThread::SetScreenSize(unsigned int, unsigned int)
    void OSRenderCore_RenderThread::SetScreenSize(uint param_1, uint param_2) {
        ((field_32 + (long)(field_0[-3] + 8)), param_1, param_2)->Set();
    }

    // 0x1001bfaa0, 96 bytes, placed by neighbouring functions
    // OSRenderCore_RenderThread_Common::SetRenderViewRect(int, int, int, int)
    void OSRenderCore_RenderThread_Common::SetRenderViewRect(int param_1, int param_2, int param_3, int param_4) {
        Rect local_30[16];

        new (local_30) dash3d::GridRect(param_1, param_2, param_3, param_4);
        if (jag::math::Rect<int>::operator!=((Rect<int>*)local_30, (Rect*)&field_24) != '\0') {
            field_116 = field_112 + 2;
        }
        jag::math::Rect<unsigned int>::operator=((Rect<unsigned int>*)&field_24, local_30);
    }

    // 0x1001bfb00, 16 bytes, placed by neighbouring functions
    // OSRenderCore_RenderThread_UI::SetUIViewRect(int, int, int, int)
    void OSRenderCore_RenderThread_UI::SetUIViewRect(int param_1, int param_2, int param_3, int param_4) {
        new (field_8, param_1, param_2, param_3, param_4) dash3d::GridRect();
    }

    // 0x1001bfb10, 128 bytes, placed by neighbouring functions
    // OSRenderCore_RenderThread_JavaStyle::GetNextWriteVB()
    void OSRenderCore_RenderThread_JavaStyle::GetNextWriteVB() {
        vector<render::VertexBuffer, eastl::allocator>* this_00;
        long lVar1;
        VertexBuffer* pVVar2;
        undefined1* this_01;

        this_00 = (vector<render::VertexBuffer, eastl::allocator>*)(&field_4576)->GetWrite();
        this_01 = &field_4656;
        lVar1 = this_01->size();
        if (lVar1 == 0) {
            pVVar2 = (VertexBuffer*)eastl::vector<render::VertexBuffer, eastl::allocator>::push_back(this_00);
            pVVar2->Create(2097152, 1, 0);
        } else {
            pVVar2 = (VertexBuffer*)this_01->back();
            eastl::vector<render::VertexBuffer, eastl::allocator>::push_back(this_00, pVVar2);
            this_01->pop_back();
        }
        eastl::vector<render::VertexBuffer, eastl::allocator>::back(this_00);
    }

    // 0x1001bfd20, 1584 bytes, placed by __FILE__ string
    // OSRenderCore_RenderThread_JavaStyle::UploadVertexBuffer(bool)
    void OSRenderCore_RenderThread_JavaStyle::UploadVertexBuffer(bool param_1) {
        VBOMapper* pVVar1;
        vector<OSRenderCore_RenderThread_JavaStyle::VertexBufferSection,
               eastl::fixed_vector_allocator<48ul, 128ul, 4ul, 0ul, true, eastl::allocator>>* this_00;
        OSRenderCore_RenderThread_JavaStyle* pOVar2;
        char cVar3;
        char cVar4;
        uint uVar5;
        int iVar6;
        undefined4* puVar7;
        undefined4* puVar8;
        long lVar9;
        long lVar10;
        Layout* pLVar11;
        VertexBuffer* pVVar12;
        VertexBuffer* pVVar13;
        TriangleVertexData* pTVar14;
        undefined8 uVar15;
        vector<game::LocationAudioProperties, eastl::allocator>* this_01;
        VertexBufferSection* pVVar16;
        uint uVar17;
        undefined4 uVar18;
        ulong uVar19;
        undefined7 in_register_00000031;
        uint uVar20;
        undefined1* puVar21;
        undefined1 local_108[64];
        RoundRobin<eastl::vector<render::VertexBuffer, eastl::allocator>, 2ul>* local_c8;
        undefined8 local_c0;
        VBOMapper* local_b8;
        RenderableOutput local_b0;
        VertexBuffer* local_70;
        vector<OSRenderCore_RenderThread_JavaStyle::VertexBufferSection,
               eastl::fixed_vector_allocator<48ul, 128ul, 4ul, 0ul, true, eastl::allocator>>* local_68;
        ulong local_60;
        fixed_hash_map* local_58;
        OSRenderCore_RenderThread_JavaStyle* local_50;
        undefined1* local_48;
        undefined4 local_3c;
        undefined4 local_38;
        uint local_34;

        local_34 = (uint)CONCAT71(in_register_00000031, param_1);
        local_50 = this;
        local_58 = (fixed_hash_map*)((field_16 + *(long*)(field_0 + -24) + -16))->GetRenderStateNXT();
        if (*(int*)(local_58 + 32) != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("nxtRenderState.m_zoom == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/osrendercore/"
                      "OSRenderCore.cpp",
                      813, (char*)0);
        }
        pLVar11 = (Layout*)(local_58 + 17432696);
        puVar7 = (undefined4*)
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(pLVar11);
        puVar8 = (undefined4*)pLVar11->end();
        local_48 = &local_50->field_8592;
        if (puVar7 != puVar8) {
            do {
                local_b0._0_4_ = *puVar7;
                local_48->erase((int*)&local_b0);
                puVar7 = puVar7 + 1;
            } while (puVar7 != puVar8);
        }
        pLVar11->reset_lose_memory();
        if ((char)local_34 == '\0') {
            pLVar11 = (Layout*)(local_58 + 3539024);
            lVar9 =
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(pLVar11);
            lVar10 = pLVar11->end();
            if (lVar9 != lVar10) {
                do {
                    cVar3 = ((lVar9 + 8))->IsTemporary();
                    if (cVar3 == '\0') {
                        eastl::hashtable<
                            int, eastl::pair<int const, Model>,
                            eastl::fixed_hashtable_allocator<32770ul, 432ul, 32768ul, 8ul, 0ul, true, eastl::allocator>,
                            eastl::use_first<eastl::pair<int const, Model>>, eastl::equal_to<int>, eastl::hash<int>,
                            eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false,
                            true, true>::emplace<eastl::pair<int, Model>>((pair*)&local_b0);
                    }
                    lVar9 = lVar9 + 424;
                } while (lVar9 != lVar10);
            }
            pLVar11->clear();
        } else {
            pLVar11 = (Layout*)(local_58 + 3539024);
            lVar9 =
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(pLVar11);
            lVar10 = pLVar11->end();
            if (lVar9 != lVar10) {
                do {
                    eastl::hashtable<
                        int, eastl::pair<int const, Model>,
                        eastl::fixed_hashtable_allocator<32770ul, 432ul, 32768ul, 8ul, 0ul, true, eastl::allocator>,
                        eastl::use_first<eastl::pair<int const, Model>>, eastl::equal_to<int>, eastl::hash<int>,
                        eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                        true>::emplace<eastl::pair<int, Model>>((pair*)&local_b0);
                    lVar9 = lVar9 + 424;
                } while (lVar9 != lVar10);
            }
            pLVar11->reset_lose_memory();
        }
        if ((char)local_34 != '\0') {
            local_c8 = (RoundRobin<eastl::vector<render::VertexBuffer, eastl::allocator>, 2ul>*)&local_50->field_4576;
            pLVar11 = (Layout*)local_c8->GetWrite();
            pVVar12 = (VertexBuffer*)
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(pLVar11);
            pVVar13 = (VertexBuffer*)pLVar11->end();
            if (pVVar12 != pVVar13) {
                puVar21 = &local_50->field_4656;
                do {
                    puVar21->push_back(pVVar12);
                    pVVar12 = pVVar12 + 1;
                } while (pVVar12 != pVVar13);
            }
            pLVar11->clear();
            pOVar2 = local_50;
            *(undefined4*)(local_50->field_16 + *(long*)(local_50->field_0 + -24) + 92) = 0;
            local_3c = 0;
            local_68 = (vector<OSRenderCore_RenderThread_JavaStyle::VertexBufferSection,
                               eastl::fixed_vector_allocator<48ul, 128ul, 4ul, 0ul, true,
                                                             eastl::allocator>>*)(&local_50->field_14427080)
                           ->GetWrite();
            eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
            pLVar11 = (Layout*)(local_58 + 40);
            pTVar14 = (TriangleVertexData*)
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(pLVar11);
            local_108._56_8_ = pLVar11->end();
            local_b8 = (VBOMapper*)pOVar2->field_16;
            if (pTVar14 == (TriangleVertexData*)local_108._56_8_) {
                local_b0.field_48._8_8_ = 0;
                uVar5 = 0;
                local_70 = (VertexBuffer*)0;
            } else {
                local_60 = 4294967295;
                local_38 = 0;
                local_70 = (VertexBuffer*)0;
                local_c0 = 0;
                local_b0.field_48._8_8_ = 0;
                puVar21 = local_48;
                uVar20 = 0;
                uVar17 = 0;
                do {
                    uVar5 = uVar17;
                    local_b0.Render(pTVar14, (uint)local_c0, (RenderState*)(ulong)uVar20, local_58, (uint)puVar21);
                    pVVar1 = local_b8;
                    if (local_b0.field_0 == '\x01') {
                        if (local_70 != (VertexBuffer*)0) {
                            local_b8->Unmap(local_70);
                        }
                        pVVar12 = (VertexBuffer*)GetNextWriteVB(local_50);
                        uVar15 = VBOMapper::Map(pVVar1, pVVar12, 4, 0, 0, 0, uVar5);
                        local_70 = pVVar12;
                        uVar5 = pVVar12->GetAliveCount();
                        uVar19 = (ulong)((int)local_60 + 1);
                        local_3c = 0;
                        this_01 = (vector<game::LocationAudioProperties, eastl::allocator>*)local_c8->GetWrite();
                        lVar9 = eastl::vector<game::LocationAudioProperties, eastl::allocator>::size(this_01);
                        puVar21 = local_48;
                        local_60 = uVar19;
                        if (lVar9 - 1U != uVar19) {
                            /* WARNING: Subroutine does not return */
                            LogAssert("poolCursor == m_triangleVBs.GetWrite().size() - 1",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/"
                                      "osrendercore/OSRenderCore.cpp",
                                      895, (char*)0);
                        }
                        local_b0.field_48._8_8_ = ZEXT48(local_b0.field_48._8_4_ + uVar20);
                        uVar20 = 0;
                        local_c0 = uVar15;
                        local_34 = uVar5 >> 4;
                        local_108->Render(pTVar14, (uint)uVar15, 0, local_58, (uint)local_48);
                        RenderableOutput::operator=(&local_b0, (RenderableOutput*)local_108);
                        local_38 = 0;
                        uVar5 = 0;
                        if (local_b0.field_0 != '\x01') {
                            if (local_b0.field_0 == '\x05')
                                goto LAB_1001bffb0;
                        LAB_1001c0190:
                            iVar6 = local_b0.GetTotalVertCount();
                            uVar5 = iVar6 + uVar20;
                            if (local_34 < uVar5) {
                                /* WARNING: Subroutine does not return */
                                LogAssert("vertCursor <= maxVertIndex",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                          "oldscape/osrendercore/OSRenderCore.cpp",
                                          919, (char*)0);
                            }
                            cVar3 = local_b0.field_0;
                            if (((char)local_38 == local_b0.field_0) &&
                                (cVar4 = operator==((TintMode*)&local_3c, (TintMode*)local_b0.field_48),
                                 iVar6 = local_b0.field_4, cVar4 != '\0')) {
                                lVar9 = eastl::vector<OSRenderCore_RenderThread_JavaStyle::VertexBufferSection,
                                                      eastl::fixed_vector_allocator<48ul, 128ul, 4ul, 0ul, true,
                                                                                    eastl::allocator>>::back(local_68);
                                *(int*)(lVar9 + 8) = *(int*)(lVar9 + 8) + iVar6;
                                puVar21 = local_48;
                            } else {
                                this_00 = local_68;
                                if (local_b0.field_4 != 0) {
                                    if (cVar3 == '\x02') {
                                        pVVar16 = eastl::vector<
                                            OSRenderCore_RenderThread_JavaStyle::VertexBufferSection,
                                            eastl::fixed_vector_allocator<48ul, 128ul, 4ul, 0ul, true,
                                                                          eastl::allocator>>::emplace_back<>(local_68);
                                        *(undefined4*)&pVVar16->field_0 = 0;
                                        *(int*)((long)&pVVar16->field_0 + 4) = (int)local_60;
                                        pVVar16->field_8 = pVVar16->field_8 + local_b0.field_4;
                                        *(undefined4*)pVVar16->field_44 = local_b0.field_48._0_4_;
                                        local_3c = local_b0.field_48._0_4_;
                                        local_38 = (undefined4)CONCAT71((uint7)local_b0.field_48._1_3_, 2);
                                    } else if ((byte)(cVar3 - 3U) < 2) {
                                        pVVar16 = eastl::vector<
                                            OSRenderCore_RenderThread_JavaStyle::VertexBufferSection,
                                            eastl::fixed_vector_allocator<48ul, 128ul, 4ul, 0ul, true,
                                                                          eastl::allocator>>::emplace_back<>(local_68);
                                        *(uint*)&pVVar16->field_0 = 2 - (uint)(local_b0.field_0 == '\x03');
                                        uVar18 = (undefined4)local_60;
                                        *(undefined4*)((long)&pVVar16->field_0 + 4) = uVar18;
                                        pVVar16->field_8 = local_b0.field_4;
                                        *(undefined4*)pVVar16->field_44 = local_b0.field_48._0_4_;
                                        if (local_b0.field_8 != 0) {
                                            pVVar16 =
                                                eastl::vector<OSRenderCore_RenderThread_JavaStyle::VertexBufferSection,
                                                              eastl::fixed_vector_allocator<48ul, 128ul, 4ul, 0ul, true,
                                                                                            eastl::allocator>>::
                                                    emplace_back<>(this_00);
                                            *(undefined4*)&pVVar16->field_0 = 4;
                                            *(undefined4*)((long)&pVVar16->field_0 + 4) = uVar18;
                                            pVVar16->field_8 = local_b0.field_8;
                                        }
                                        puVar21 = local_48;
                                        if (local_b0.field_12 != 0) {
                                            pVVar16 =
                                                eastl::vector<OSRenderCore_RenderThread_JavaStyle::VertexBufferSection,
                                                              eastl::fixed_vector_allocator<48ul, 128ul, 4ul, 0ul, true,
                                                                                            eastl::allocator>>::
                                                    emplace_back<>(local_68);
                                            *(undefined4*)&pVVar16->field_0 = 3;
                                            *(int*)((long)&pVVar16->field_0 + 4) = (int)local_60;
                                            pVVar16->field_8 = local_b0.field_12;
                                        }
                                        local_3c = 0;
                                        local_38 = 0;
                                        goto LAB_1001c0014;
                                    }
                                }
                                puVar21 = local_48;
                            }
                        }
                    } else {
                        local_34 = uVar17;
                        if (local_b0.field_0 != '\x05')
                            goto LAB_1001c0190;
                    LAB_1001bffb0:
                        pVVar16 =
                            eastl::vector<OSRenderCore_RenderThread_JavaStyle::VertexBufferSection,
                                          eastl::fixed_vector_allocator<48ul, 128ul, 4ul, 0ul, true,
                                                                        eastl::allocator>>::emplace_back<>(local_68);
                        *(undefined4*)&pVVar16->field_0 = 5;
                        UISceneSettings::operator=((UISceneSettings*)pVVar16->field_12,
                                                   (UISceneSettings*)local_b0.field_16);
                        *(undefined4*)pVVar16->field_44 = local_b0.field_48._0_4_;
                        *(int*)((long)&pVVar16->field_0 + 4) = (int)local_60;
                        pVVar16->field_8 = 0;
                        *(undefined4*)(*(long*)(local_50->field_16 + *(long*)(local_50->field_0 + -24) + 72) + 32) =
                            local_b0.field_16._8_4_;
                        local_3c = 0;
                        local_38 = 0;
                        puVar21 = local_48;
                        uVar5 = uVar20;
                    }
                LAB_1001c0014:
                    pTVar14 = pTVar14 + 72;
                    uVar20 = uVar5;
                    uVar17 = local_34;
                } while (pTVar14 != (TriangleVertexData*)local_108._56_8_);
            }
            if (local_70 != (VertexBuffer*)0) {
                local_b8->Unmap(local_70);
            }
            *(uint*)(local_50->field_16 + *(long*)(local_50->field_0 + -24) + 92) = uVar5 + local_b0.field_48._8_4_;
        }
        *(undefined4*)(local_58 + 32) = 0;
    }

    // 0x1001c1140, 1872 bytes, placed by __FILE__ string
    // OSRenderCore_RenderThread::CreateRenderingResources()
    void OSRenderCore_RenderThread::CreateRenderingResources() {
        undefined1* puVar1;
        undefined4 uVar2;
        undefined4 uVar3;
        int iVar4;
        undefined8 uVar5;
        char* pcVar6;
        char* pcVar7;
        VertexBuffer* this_00;
        VertexBuffer* pVVar8;
        VertexElementDesc* pVVar9;
        long lVar10;
        DebugUIManager* this_01;
        Singleton<render::BuiltinStates>* pSVar11;
        undefined1 local_e0[80];
        VertexElementDesc local_90;
        basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>> local_68[36];
        uint local_44;
        undefined8 local_40[3];

        uVar5 = logger::default_logger();
        logger::Logger::Log(uVar5, 0, 8,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/"
                            "osrendercore/OSRenderCore.cpp",
                            1040);
        new (local_e0) render::VertexElementDesc(0, "aPosition", 1, 0, 0, 0);
        local_68->GetCompletedShader(1);
        pcVar6 = (char*)std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::c_str(local_68);
        GetCompletedHighPrecisionPixelShader((oldscape*)local_40, 0);
        pcVar7 = (char*)local_40->c_str();
        (&field_1583088, pcVar6, pcVar7, (VertexElementDesc*)local_e0, 1, '\0')->CreateFromSourceString();
        local_40->~basic_string();
        std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::~basic_string(local_68);
        local_68->GetCompletedShader(1);
        pcVar6 = (char*)std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::c_str(local_68);
        GetCompletedHighPrecisionPixelShader((oldscape*)local_40, 8);
        pcVar7 = (char*)local_40->c_str();
        ((field_112 + 1573360), pcVar6, pcVar7, (VertexElementDesc*)local_e0, 1, '\0')->CreateFromSourceString();
        local_40->~basic_string();
        std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::~basic_string(local_68);
        local_68->GetCompletedShader(1);
        pcVar6 = (char*)std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::c_str(local_68);
        GetCompletedHighPrecisionPixelShader((oldscape*)local_40, 10);
        pcVar7 = (char*)local_40->c_str();
        ((field_112 + 1575216), pcVar6, pcVar7, (VertexElementDesc*)local_e0, 1, '\0')->CreateFromSourceString();
        local_40->~basic_string();
        std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::~basic_string(local_68);
        local_68->GetCompletedShader(1);
        pcVar6 = (char*)std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::c_str(local_68);
        GetCompletedHighPrecisionPixelShader((oldscape*)local_40, 9);
        pcVar7 = (char*)local_40->c_str();
        ((field_112 + 1577072), pcVar6, pcVar7, (VertexElementDesc*)local_e0, 1, '\0')->CreateFromSourceString();
        local_40->~basic_string();
        std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::~basic_string(local_68);
        this_00 = (VertexBuffer*)((field_112 + 1572984))->begin();
        pVVar8 = (VertexBuffer*)((field_112 + 1572984))->end();
        for (; this_00 != pVVar8; this_00 = this_00 + 1) {
            this_00->Create(786432, 1, 0);
        }
        if ((CreateRenderingResources()::quadVertices == '\0') &&
            (iVar4 = ___cxa_guard_acquire(&CreateRenderingResources()::quadVertices), iVar4 != 0)) {
            new (&CreateRenderingResources()::quadVertices) jag::math::Point<float>(0.0, 1.0);
            new (&DAT_104229188) jag::math::Point<float>(1.0, 1.0);
            new (&DAT_104229190) jag::math::Point<float>(0.0, 0.0);
            new (&DAT_104229198) jag::math::Point<float>(1.0, 0.0);
            ___cxa_guard_release(&CreateRenderingResources()::quadVertices);
        }
        (&field_1583008, 32, 0, &CreateRenderingResources()::quadVertices)->Create();
        new (local_e0) render::VertexElementDesc(0, "aPosition_Atlas", 16, 0, 0, 0);
        new ((local_e0 + 40)) render::VertexElementDesc(0, "aColour", 18, 1, 10, 0);
        new (&local_90) render::VertexElementDesc(0, "aTextureUV", 14, 0, 5, 0);
        local_68->GetCompletedShader(5);
        pcVar6 = (char*)std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::c_str(local_68);
        GetCompletedHighPrecisionPixelShader((oldscape*)local_40, 4);
        pcVar7 = (char*)local_40->c_str();
        pVVar9 = (VertexElementDesc*)std::array<render::VertexElementDesc, 3ul>::operator[]((ulong)local_e0);
        (&field_1585248, pcVar6, pcVar7, pVVar9, 3, '\0')->CreateFromSourceString();
        local_40->~basic_string();
        std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::~basic_string(local_68);
        new (local_e0) render::VertexElementDesc(0, "aPosition_Atlas", 16, 0, 0, 0);
        new ((local_e0 + 40)) render::VertexElementDesc(0, "aColour", 18, 0, 10, 0);
        new (&local_90) render::VertexElementDesc(0, "aTextureUV", 14, 0, 5, 0);
        local_68->GetCompletedShader(3);
        pcVar6 = (char*)std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::c_str(local_68);
        GetCompletedHighPrecisionPixelShader((oldscape*)local_40, 2);
        pcVar7 = (char*)local_40->c_str();
        pVVar9 = (VertexElementDesc*)std::array<render::VertexElementDesc, 3ul>::operator[]((ulong)local_e0);
        (&field_1587104, pcVar6, pcVar7, pVVar9, 3, '\0')->CreateFromSourceString();
        local_40->~basic_string();
        std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::~basic_string(local_68);
        new (local_e0) render::Texture::Desc();
        local_e0._0_4_ = 2048;
        local_e0._4_4_ = 2048;
        local_e0._12_4_ = 29;
        local_e0._24_4_ = 1;
        local_e0[32] = 0;
        new (local_40) render::ResourceDataT<unsigned char const>(0, 0, 0, false);
        new (local_68) eastl::vector<unsigned int, eastl::allocator>();
        local_44 = 4294967295;
        local_68->resize(4194304, &local_44);
        local_40[0] = local_68->HeapBeginPtr();
        iVar4 = render::GetFormatByteCount(local_e0._12_4_);
        puVar1 = &field_1582496;
        pSVar11 = (Singleton<render::BuiltinStates>*)puVar1;
        puVar1->Create(local_e0, local_40, iVar4 << 22);
        lVar10 = pSVar11->Instance();
        puVar1->SetSamplerState((SamplerState*)(lVar10 + 80), false);
        local_68->~vector();
        local_40->~ResourceDataT();
        new (local_e0) render::Texture::Desc();
        local_e0._0_4_ = 128;
        local_e0._4_4_ = 512;
        local_e0._12_4_ = 29;
        local_e0._24_4_ = 1;
        local_e0[32] = 0;
        new (local_40) render::ResourceDataT<unsigned char const>(0, 0, 0, false);
        new (local_68) eastl::vector<unsigned int, eastl::allocator>();
        local_44 = 0;
        local_68->resize((ulong)(uint)(local_e0._4_4_ * local_e0._0_4_), &local_44);
        local_40[0] = local_68->HeapBeginPtr();
        uVar2 = local_e0._0_4_;
        uVar3 = local_e0._4_4_;
        iVar4 = render::GetFormatByteCount(local_e0._12_4_);
        puVar1 = &field_1581984;
        pSVar11 = (Singleton<render::BuiltinStates>*)puVar1;
        puVar1->Create(local_e0, local_40, uVar3 * uVar2 * iVar4);
        lVar10 = pSVar11->Instance();
        puVar1->SetSamplerState((SamplerState*)(lVar10 + 80), false);
        local_68->~vector();
        local_40->~ResourceDataT();
        (&field_1580368, false)->SetupDepthStencils();
        (*(code*)field_0[1])(this, 1);
        this_01 = (DebugUIManager*)Instance();
        this_01->CreateRenderingResources();
    }

    // 0x1001c1a60, 480 bytes, placed by neighbouring functions
    // OSRenderCore_RenderThread_JavaStyle::SetupDepthStencils(bool)
    void OSRenderCore_RenderThread_JavaStyle::SetupDepthStencils(bool param_1) {
        undefined1* this_00;
        long lVar1;
        Desc local_58;

        this_00 = &field_14439464;
        lVar1 = this_00->second();
        if ((*(int*)(lVar1 + 12) != 513) == param_1) {
            if (param_1) {
                new (&local_58) render::DepthStencilState::Desc();
                local_58.SetToDefault();
                this_00->Create(&local_58);
                new (&local_58) render::DepthStencilState::Desc();
                local_58.SetToDefault();
                local_58.field_16 = '\x01';
                local_58.field_18 = -1;
                local_58._19_1_ = 1;
                local_58._28_8_ = 2229088034305;
                (&field_14439524, &local_58)->Create();
                new (&local_58) render::DepthStencilState::Desc();
                local_58.field_2 = '\0';
            } else {
                new (&local_58) render::DepthStencilState::Desc();
                local_58.SetToDefault();
                local_58.field_1 = '\x01';
                local_58.field_2 = '\0';
                local_58.field_12 = 519;
                this_00->Create(&local_58);
                new (&local_58) render::DepthStencilState::Desc();
                local_58.field_1 = '\x01';
                local_58.field_2 = '\0';
                local_58.field_12 = 519;
                local_58.field_16 = '\x01';
                local_58.field_18 = -1;
                local_58._19_1_ = 1;
                local_58._28_8_ = 2229088034305;
                (&field_14439524, &local_58)->Create();
                new (&local_58) render::DepthStencilState::Desc();
                local_58.field_1 = '\x01';
                local_58.field_2 = '\0';
                local_58.field_12 = 519;
            }
            local_58.field_16 = '\x01';
            local_58.field_17 = -1;
            local_58._32_4_ = 517;
            local_58._19_1_ = 1;
            (&field_14439704, &local_58)->Create();
            new (&local_58) render::DepthStencilState::Desc();
            local_58.field_1 = '\x01';
            local_58.field_2 = '\0';
            local_58.field_12 = 519;
            local_58.field_16 = '\x01';
            local_58.field_17 = -1;
            local_58._32_4_ = 514;
            local_58._19_1_ = 1;
            (&field_14439644, &local_58)->Create();
            new (&local_58) render::DepthStencilState::Desc();
            local_58.field_1 = '\x01';
            local_58.field_2 = '\0';
            local_58.field_12 = 519;
            local_58.field_16 = '\x01';
            local_58.field_18 = -1;
            local_58._19_1_ = 1;
            local_58._32_4_ = 512;
            local_58._20_4_ = 7681;
            (&field_14439584, &local_58)->Create();
        }
    }

    // 0x1001c1c40, 672 bytes, placed by __FILE__ string
    // OSRenderCore_RenderThread::DestroyRenderingResources()
    void OSRenderCore_RenderThread::DestroyRenderingResources() {
        undefined1* this_00;
        undefined8 uVar1;
        vector<render::VertexBuffer, eastl::allocator>* this_01;
        vector<render::VertexBuffer, eastl::allocator>* pvVar2;
        VertexBuffer* pVVar3;
        VertexBuffer* pVVar4;
        long* plVar5;
        long* plVar6;
        PixelUnpackBuffer* this_02;
        PixelUnpackBuffer* pPVar7;
        DebugUIManager* this_03;

        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 8,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/"
                            "osrendercore/OSRenderCore.cpp",
                            1177, "DestroyRenderingResources called");
        (*(code*)field_0[1])(this, 0);
        ((field_112 + 1573360))->Destroy();
        ((field_112 + 1575216))->Destroy();
        ((field_112 + 1577072))->Destroy();
        this_01 = (vector<render::VertexBuffer, eastl::allocator>*)(&field_1584944)->begin();
        pvVar2 = (vector<render::VertexBuffer, eastl::allocator>*)(&field_1584944)->end();
        for (; this_01 != pvVar2; this_01 = this_01 + 32) {
            pVVar3 = (VertexBuffer*)this_01->HeapBeginPtr();
            pVVar4 = (VertexBuffer*)this_01->end();
            for (; pVVar3 != pVVar4; pVVar3 = pVVar3 + 1) {
                pVVar3->Destroy();
            }
            eastl::vector<render::VertexBuffer, eastl::allocator>::clear(this_01);
        }
        this_00 = &field_1585024;
        pVVar3 = (VertexBuffer*)this_00->HeapBeginPtr();
        pVVar4 = (VertexBuffer*)this_00->end();
        for (; pVVar3 != pVVar4; pVVar3 = pVVar3 + 1) {
            pVVar3->Destroy();
        }
        this_00->clear();
        (&field_1585056)->Destroy();
        pVVar3 = (VertexBuffer*)((field_112 + 1572984))->begin();
        pVVar4 = (VertexBuffer*)((field_112 + 1572984))->end();
        for (; pVVar3 != pVVar4; pVVar3 = pVVar3 + 1) {
            pVVar3->Destroy();
        }
        ((field_112 + 1573160))->Destroy();
        (&field_1585248)->Destroy();
        (&field_1587104)->Destroy();
        (&field_1583008)->Destroy();
        (&field_1583088)->Destroy();
        (&field_1582496)->Destroy();
        (&field_1581984)->Destroy();
        render::RenderTargets::SafeReset((shared_ptr*)(field_1580384 + 32));
        ((field_1580384 + 48))->Destroy();
        (&field_1580944)->Destroy();
        render::RenderTargets::SafeReset((shared_ptr*)field_1581456);
        (&field_1581472)->Destroy();
        plVar5 = (long*)((field_112 + 1578944))->begin();
        plVar6 = (long*)((field_112 + 1578944))->end();
        for (; plVar5 != plVar6; plVar5 = plVar5 + 64) {
            (**(code**)(*plVar5 + 16))(plVar5);
        }
        this_02 = (PixelUnpackBuffer*)((field_112 + 1579984))->begin();
        pPVar7 = (PixelUnpackBuffer*)((field_112 + 1579984))->end();
        for (; this_02 != pPVar7; this_02 = this_02 + 1) {
            this_02->Destroy();
        }
        DestroyRSeven();
        this_03 = (DebugUIManager*)Instance();
        this_03->UnregisterInputHandler();
        this_03->Instance();
        this_03->Destroy();
    }

    // 0x1001c3640, 304 bytes, placed by __FILE__ string
    // OSRenderCore_AudioThread::WriteAudioSamples(hal::audio::AudioBuffer&)
    void OSRenderCore_AudioThread::WriteAudioSamples(AudioBuffer* param_1) {
        char cVar2;
        uint uVar4;
        undefined8* puVar5;
        Layout* this_00;
        shared_ptr* this_01;
        vector* this_02;
        AudioRenderer* this_03;
        AudioMixer* this_04;
        AudioBuss* this_05;
        AudioBuffer* pAVar6;
        uint uVar7;
        uint local_38;
        uint local_34;

        pAVar6 = param_1;
        puVar5 = (undefined8*)OSRenderCore_AnyThread::Instance();
        this_00 = (Layout*)(**(code**)*puVar5)(puVar5);
        this_01 = (shared_ptr*)eastl::string::Layout::SSOBeginPtr(this_00, (type*)pAVar6);
        if (shared_ptr::operator_cast_to_bool(this_01)) {
            this_02 = eastl::string::Layout::SSOBeginPtr(this_00, (type*)pAVar6);
            this_03 = (AudioRenderer*)shared_ptr<hal::audio::AudioRenderer>::operator->(
                (shared_ptr<hal::audio::AudioRenderer>*)this_02);
            this_04 = (AudioMixer*)this_03->GetMixer();
            this_05 = (AudioBuss*)this_04->GetMasterBuss();
            pAVar6 = (AudioBuffer*)this_05->GetBuffer();
            local_38 = 0;
            local_34 = 0;
            if ((*(code*)pAVar6->field_0[3])(pAVar6) != 0) {
                uVar7 = 0;
                do {
                    cVar2 = (*(code*)param_1->field_0[4])(param_1, uVar7);
                    uVar4 = 0;
                    if (cVar2 != '\0') {
                        uVar4 = uVar7;
                    }
                    pAVar6->WriteSamples(param_1, uVar4, uVar7, &local_38, &local_34, false, 1.0, 0.0);
                    uVar7 = uVar7 + 1;
                    uVar4 = (*(code*)pAVar6->field_0[3])(pAVar6);
                } while (uVar7 < uVar4);
            }
            pAVar6->WroteSamples(local_34);
            uVar7 = (*(code*)param_1->field_0[2])(param_1, 0);
            if (uVar7 != local_38) {
                /* WARNING: Subroutine does not return */
                LogAssert("buffer.GetNumberSamplesCanBeRead(0) == numSamplesRead",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/osrendercore/"
                          "OSRenderCore.cpp",
                          1855, (char*)0);
            }
        }
    }

    // 0x1001c3800, 32 bytes, placed by neighbouring functions
    // OSRenderCore_Impl::LockAudio()
    void OSRenderCore_Impl::LockAudio() {
        std::mutex::lock();
    }

    // 0x1001c3820, 32 bytes, placed by neighbouring functions
    // OSRenderCore_Impl::UnlockAudio()
    void OSRenderCore_Impl::UnlockAudio() {
        std::mutex::unlock();
    }

    // 0x1001c3840, 112 bytes, placed by neighbouring functions
    // OSRenderCore_AudioThread::GetAudioBufferSampleSize()
    uint OSRenderCore_AudioThread::GetAudioBufferSampleSize() {
        bool bVar1;
        undefined8* puVar2;
        Layout* this_00;
        shared_ptr* this_01;
        vector* pvVar3;
        AudioRenderer* this_02;
        long lVar4;
        NXTPixToolkit* this_03;
        uint uVar5;
        type* in_RSI;

        puVar2 = (undefined8*)OSRenderCore_AnyThread::Instance();
        this_00 = (Layout*)(**(code**)*puVar2)(puVar2);
        this_01 = (shared_ptr*)eastl::string::Layout::SSOBeginPtr(this_00, in_RSI);
        bVar1 = shared_ptr::operator_cast_to_bool(this_01);
        uVar5 = 0;
        if (bVar1) {
            pvVar3 = eastl::string::Layout::SSOBeginPtr(this_00, in_RSI);
            this_02 = (AudioRenderer*)shared_ptr<hal::audio::AudioRenderer>::operator->(
                (shared_ptr<hal::audio::AudioRenderer>*)pvVar3);
            lVar4 = this_02->GetMixer();
            if (lVar4 != 0) {
                pvVar3 = eastl::string::Layout::SSOBeginPtr(this_00, in_RSI);
                this_03 = (NXTPixToolkit*)shared_ptr<hal::audio::AudioRenderer>::operator->(
                    (shared_ptr<hal::audio::AudioRenderer>*)pvVar3);
                lVar4 = this_03->GetScreen();
                uVar5 = *(uint*)(lVar4 + 8) >> 1;
            }
        }
        return uVar5;
    }

    // 0x1001c38b0, 144 bytes, placed by neighbouring functions
    // OSRenderCore_AudioThread::GetNumberSamplesInAudioBuffer()
    undefined4 OSRenderCore_AudioThread::GetNumberSamplesInAudioBuffer() {
        bool bVar1;
        undefined4 uVar2;
        undefined8* puVar3;
        Layout* this_00;
        shared_ptr* this_01;
        vector* pvVar4;
        AudioRenderer* pAVar5;
        AudioMixer* this_02;
        AudioBuss* this_03;
        long* plVar7;
        type* in_RSI;

        puVar3 = (undefined8*)OSRenderCore_AnyThread::Instance();
        this_00 = (Layout*)(**(code**)*puVar3)(puVar3);
        this_01 = (shared_ptr*)eastl::string::Layout::SSOBeginPtr(this_00, in_RSI);
        bVar1 = shared_ptr::operator_cast_to_bool(this_01);
        uVar2 = 0;
        if (bVar1) {
            pvVar4 = eastl::string::Layout::SSOBeginPtr(this_00, in_RSI);
            pAVar5 = (AudioRenderer*)shared_ptr<hal::audio::AudioRenderer>::operator->(
                (shared_ptr<hal::audio::AudioRenderer>*)pvVar4);
            if (pAVar5->GetMixer() != 0) {
                pvVar4 = eastl::string::Layout::SSOBeginPtr(this_00, in_RSI);
                pAVar5 = (AudioRenderer*)shared_ptr<hal::audio::AudioRenderer>::operator->(
                    (shared_ptr<hal::audio::AudioRenderer>*)pvVar4);
                this_02 = (AudioMixer*)pAVar5->GetMixer();
                this_03 = (AudioBuss*)this_02->GetMasterBuss();
                plVar7 = (long*)this_03->GetBuffer();
                uVar2 = (**(code**)(*plVar7 + 16))(plVar7, 0);
            }
        }
        return uVar2;
    }

    // 0x1001c3940, 80 bytes, placed by neighbouring functions
    // OSRenderCore_Impl::ResumeAudio()
    void OSRenderCore_Impl::ResumeAudio() {
        Layout* pLVar2;
        shared_ptr* this_00;
        vector* this_01;
        long* plVar3;
        type* in_RSI;

        pLVar2 = (Layout*)(**(code**)(field_0 + 2))();
        this_00 = (shared_ptr*)eastl::string::Layout::SSOBeginPtr(pLVar2, in_RSI);
        if (shared_ptr::operator_cast_to_bool(this_00)) {
            pLVar2 = (Layout*)(**(code**)(field_0 + 2))(this);
            this_01 = eastl::string::Layout::SSOBeginPtr(pLVar2, in_RSI);
            plVar3 = (long*)shared_ptr<hal::audio::AudioRenderer>::operator->(
                (shared_ptr<hal::audio::AudioRenderer>*)this_01);
            (**(code**)(*plVar3 + 40))(plVar3);
        }
    }

    // 0x1001c3990, 272 bytes, placed by __FILE__ string
    // OSRenderCore_RenderThread_RSeven::CheckRebuild()
    void OSRenderCore_RenderThread_RSeven::CheckRebuild() {
        undefined1* this_00;
        MapRebuildResults* pMVar1;
        char cVar2;
        long lVar3;
        RT7Core* pRVar4;
        MaterialManager* pMVar5;
        Scene* this_01;

        lVar3 = ((field_32 + *(long*)(field_0 + -24) + -32))->GetRenderStateNXT();
        pMVar1 = *(MapRebuildResults**)(lVar3 + 17563840);
        if (pMVar1 != (MapRebuildResults*)0) {
            lVar3 = ((field_32 + *(long*)(field_0 + -24) + -32))->GetRenderStateNXT();
            if (*(int*)(lVar3 + 17563832) == 1) {
                this_00 = &field_8;
                pRVar4 =
                    (RT7Core*)std::unique_ptr<jag::graphics::RT7Core, std::default_delete<jag::graphics::RT7Core>>::
                    operator->(
                        (unique_ptr<jag::graphics::RT7Core, std::default_delete<jag::graphics::RT7Core>>*)this_00);
                pMVar5 = (MaterialManager*)pRVar4->GetMaterialManager();
                cVar2 = pMVar5->MaterialsReady();
                if (cVar2 != '\0') {
                    rseven::OSRenderCore_TextureDataProvider::HandleRebuild((MapRebuildResults*)&tdp);
                    pRVar4 = (RT7Core*)
                        std::unique_ptr<jag::graphics::RT7Core, std::default_delete<jag::graphics::RT7Core>>::operator*(
                            (unique_ptr<jag::graphics::RT7Core, std::default_delete<jag::graphics::RT7Core>>*)this_00);
                    rseven::MapRebuildHandler_RenderThread::HandleRebuild(pMVar1, pRVar4);
                    this_01 = (Scene*)std::unique_ptr<rseven::Scene, std::default_delete<rseven::Scene>>::operator->(
                        (unique_ptr<rseven::Scene, std::default_delete<rseven::Scene>>*)&field_16);
                    this_01->HandleRebuild(pMVar1);
                }
                pRVar4 =
                    (RT7Core*)std::unique_ptr<jag::graphics::RT7Core, std::default_delete<jag::graphics::RT7Core>>::
                    operator->(
                        (unique_ptr<jag::graphics::RT7Core, std::default_delete<jag::graphics::RT7Core>>*)this_00);
                pMVar5 = (MaterialManager*)pRVar4->GetMaterialManager();
                cVar2 = pMVar5->MaterialsReady();
                if (cVar2 == '\0') {
                    /* WARNING: Subroutine does not return */
                    LogAssert("m_rt7Core->GetMaterialManager().MaterialsReady()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/"
                              "osrendercore/OSRenderCore.cpp",
                              1916, (char*)0);
                }
            }
            rseven::MapRebuildHandler::DeleteRebuildResults(pMVar1);
            lVar3 = ((field_32 + *(long*)(field_0 + -24) + -32))->GetRenderStateNXT();
            *(undefined8*)(lVar3 + 17563840) = 0;
        }
    }

} // namespace jag::oldscape

namespace jag::osrsgraphics::shadersourceprovider {
    // 0x1001c1890, 304 bytes, placed by neighbouring functions
    // GetCompletedShader(ShaderResource)
    shadersourceprovider* GetCompletedShader(undefined4 param_2) {
        bool bVar1;
        char* pcVar2;
        undefined8 uVar3;
        basic_string local_70[24];
        basic_string local_58[24];
        basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>> local_40[24];

        std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::basic_string();
        pcVar2 = (char*)GetResourceFilename(param_2);
        pcVar2 = (anonymous namespace)::ConvertEncodedResourceFilename<
            std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>>(local_70, pcVar2);
        std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::basic_string<decltype(nullptr)>(
            local_40, pcVar2);
        std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::size(local_40);
        std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::substr((ulong)local_58,
                                                                                          (ulong)local_40);
        bVar1 = std::operator==(local_58, ".fs");
        local_58->~basic_string();
        uVar3 = 35632;
        if (!bVar1) {
            std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::size(local_40);
            std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::substr((ulong)local_58,
                                                                                              (ulong)local_40);
            bVar1 = std::operator==(local_58, ".vs");
            local_58->~basic_string();
            uVar3 = 4294967295;
            if (bVar1) {
                uVar3 = 35633;
            }
        }
        GetCompletedShader(this, param_2, uVar3);
        std::basic_string<char, std::char_traits<char>, BucketAllocatorSTL<char>>::~basic_string(local_40);
        local_70->~basic_string();
        return this;
    }

} // namespace jag::osrsgraphics::shadersourceprovider
