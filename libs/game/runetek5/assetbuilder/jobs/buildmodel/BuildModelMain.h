// libs/game/runetek5/assetbuilder/jobs/buildmodel/BuildModelMain.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class BuildModelMain : public AssetJob // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~BuildModelMain();
        virtual RunFirst(Js5ResourceProvider*, ConfigProvider*);
        virtual BuildModelMain* CreateWorker();
        virtual DecodeResult(shared_ptr<void> const&);
        virtual GetRequestData();
        GetConstructedAsset() const;
        bool IsAssetConstructed() const;
        void SetUseUncompressedTextures(bool);
        void SetScale(eastl::vector<float, eastl::allocator> const&);
        void SetRotation(eastl::vector<math::Vector3T<float>, eastl::allocator> const&);
        void SetTranslation(eastl::vector<math::Vector3T<float>, eastl::allocator> const&);
        void SetModelRecolour(eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator> const&);
        void SetModelRematerial(eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator> const&);
        void SetOffset(eastl::vector<math::Vector3T<float>, eastl::allocator>&&);
        void SetResize(math::Vector3T<float> const&);
        void SetCustomRecolor(Array<unsigned short, eastl::allocator> const&,
                              Array<unsigned short, eastl::allocator> const&);
        void SetRecolorPalette(Array<unsigned char, eastl::allocator> const&);
        void SetTint(signed char, signed char, signed char, unsigned char);
        void SetExternalID(int);
        void SetMirror(bool);
        void SetShareLight(bool);
        void SetGlobalTranslation(math::Vector3T<float> const&);
        void SetRecolor(Array<unsigned short, eastl::allocator> const&, Array<unsigned short, eastl::allocator> const&);
        void SetRematerial(Array<unsigned short, eastl::allocator> const&,
                           Array<unsigned short, eastl::allocator> const&);
        void SetPlayerRecolor(
            Array<unsigned char, eastl::allocator> const&,
            Array<Array<unsigned short, eastl::allocator>, eastl::allocator> const&,
            Array<Array<Array<unsigned short, eastl::allocator>, eastl::allocator>, eastl::allocator> const&);
        void SetPlayerRematerial(
            Array<unsigned char, eastl::allocator> const&,
            Array<Array<unsigned short, eastl::allocator>, eastl::allocator> const&,
            Array<Array<Array<unsigned short, eastl::allocator>, eastl::allocator>, eastl::allocator> const&);
        void SetAmbientAdjust(unsigned short);
        BuildModelMain(int, graphics::ModelConstructedState, bool, graphics::RT7Core*,
                       eastl::fixed_vector<PacketView, 1ul, true, eastl::allocator>&&,
                       shared_ptr<graphics::Model> const&);
        void PostDecodeResultSetup(BuildModelResultData&);

        // data members, from how the methods use this: 128 bytes, the first 72 are AssetJob
        char _unknown_72[8];
        byte field_80; // offset 80
        char _unknown_81[7];
        RT7Core* field_88;    // offset 88
        shared_ptr field_96;  // offset 96
        shared_ptr field_112; // offset 112
    };

    // 0x100436c80, 64 bytes, inline, placed by class name and debug map
    // BuildModelMain::IsAssetConstructed() const
    bool BuildModelMain::IsAssetConstructed() {
        bool bVar1;
        byte bVar2;
        Model* this_00;

        bVar1 = field_96->operator_cast_to_bool();
        if (bVar1) {
            this_00 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)field_96);
            bVar2 = this_00->GetConstructedState();
            bVar1 = field_80 <= bVar2;
        } else {
            bVar1 = false;
        }
        return bVar1;
    }

    // 0x1004e10e0, 32 bytes, inline, placed by class name
    // BuildModelMain::SetUseUncompressedTextures(bool)
    void BuildModelMain::SetUseUncompressedTextures(bool param_1) {
        long lVar1;

        lVar1 = shared_ptr<BuildModelRequestData>::operator->((shared_ptr<BuildModelRequestData>*)field_112);
        *(bool*)(lVar1 + 664) = param_1;
    }

    // 0x100504c90, 48 bytes, inline, placed by class name
    // BuildModelMain::SetScale(eastl::vector<float, eastl::allocator> const&)
    void BuildModelMain::SetScale(vector* param_1) {
        long lVar1;

        lVar1 = shared_ptr<BuildModelRequestData>::operator->((shared_ptr<BuildModelRequestData>*)field_112);
        eastl::vector<float, eastl::allocator>::operator=((vector<float, eastl::allocator>*)(lVar1 + 160), param_1);
    }

    // 0x100504cc0, 48 bytes, inline, placed by class name
    // BuildModelMain::SetRotation(eastl::vector<math::Vector3T<float>, eastl::allocator> const&)
    void BuildModelMain::SetRotation(vector* param_1) {
        long lVar1;

        lVar1 = shared_ptr<BuildModelRequestData>::operator->((shared_ptr<BuildModelRequestData>*)field_112);
        eastl::vector<math::Vector3T<float>, eastl::allocator>::operator=(
            (vector<math::Vector3T<float>, eastl::allocator>*)(lVar1 + 192), param_1);
    }

    // 0x100504cf0, 48 bytes, inline, placed by class name
    // BuildModelMain::SetTranslation(eastl::vector<math::Vector3T<float>, eastl::allocator> const&)
    void BuildModelMain::SetTranslation(vector* param_1) {
        long lVar1;

        lVar1 = shared_ptr<BuildModelRequestData>::operator->((shared_ptr<BuildModelRequestData>*)field_112);
        eastl::vector<math::Vector3T<float>, eastl::allocator>::operator=(
            (vector<math::Vector3T<float>, eastl::allocator>*)(lVar1 + 224), param_1);
    }

    // 0x100504d20, 48 bytes, inline, placed by class name
    // BuildModelMain::SetModelRecolour(eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator> const&)
    void BuildModelMain::SetModelRecolour(vector* param_1) {
        long lVar1;

        lVar1 = shared_ptr<BuildModelRequestData>::operator->((shared_ptr<BuildModelRequestData>*)field_112);
        eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator=(
            (vector<eastl::vector<int, eastl::allocator>, eastl::allocator>*)(lVar1 + 256), param_1);
    }

    // 0x100504d50, 48 bytes, inline, placed by class name
    // BuildModelMain::SetModelRematerial(eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator> const&)
    void BuildModelMain::SetModelRematerial(vector* param_1) {
        long lVar1;

        lVar1 = shared_ptr<BuildModelRequestData>::operator->((shared_ptr<BuildModelRequestData>*)field_112);
        eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator=(
            (vector<eastl::vector<int, eastl::allocator>, eastl::allocator>*)(lVar1 + 288), param_1);
    }

    // 0x100504d80, 48 bytes, inline, placed by class name
    // BuildModelMain::SetOffset(eastl::vector<math::Vector3T<float>, eastl::allocator>&&)
    void BuildModelMain::SetOffset(vector* param_1) {
        long lVar1;

        lVar1 = shared_ptr<BuildModelRequestData>::operator->((shared_ptr<BuildModelRequestData>*)field_112);
        eastl::vector<math::Vector3T<float>, eastl::allocator>::operator=(
            (vector<math::Vector3T<float>, eastl::allocator>*)(lVar1 + 336), param_1);
    }

    // 0x100504db0, 48 bytes, inline, placed by class name
    // BuildModelMain::SetResize(math::Vector3T<float> const&)
    void BuildModelMain::SetResize(Vector3T* param_1) {
        long lVar1;

        lVar1 = shared_ptr<BuildModelRequestData>::operator->((shared_ptr<BuildModelRequestData>*)field_112);
        ((lVar1 + 372))->SetXYZ(param_1);
    }

    // 0x100504de0, 64 bytes, inline, placed by class name
    // BuildModelMain::SetCustomRecolor(Array<unsigned short, eastl::allocator> const&, Array<unsigned short, eastl::allocator> const&)
    void BuildModelMain::SetCustomRecolor(Array* param_1, Array* param_2) {
        long lVar1;

        lVar1 = shared_ptr<BuildModelRequestData>::operator->((shared_ptr<BuildModelRequestData>*)field_112);
        *(undefined1*)(lVar1 + 384) = 1;
        SetRecolor(this, param_1, param_2);
    }

    // 0x100504e20, 48 bytes, inline, placed by class name
    // BuildModelMain::SetRecolorPalette(Array<unsigned char, eastl::allocator> const&)
    void BuildModelMain::SetRecolorPalette(Array* param_1) {
        long lVar1;

        lVar1 = shared_ptr<BuildModelRequestData>::operator->((shared_ptr<BuildModelRequestData>*)field_112);
        Array<unsigned char, eastl::allocator>::operator=((Array<unsigned char, eastl::allocator>*)(lVar1 + 440),
                                                          param_1);
    }

    // 0x100504e50, 112 bytes, inline, placed by class name
    // BuildModelMain::SetTint(signed char, signed char, signed char, unsigned char)
    void BuildModelMain::SetTint(undefined1 param_2, undefined1 param_3, undefined1 param_4, undefined1 param_5) {
        long lVar1;
        undefined1* this_00;

        this_00 = field_112;
        lVar1 = shared_ptr<BuildModelRequestData>::operator->((shared_ptr<BuildModelRequestData>*)this_00);
        *(undefined1*)(lVar1 + 658) = param_2;
        lVar1 = shared_ptr<BuildModelRequestData>::operator->((shared_ptr<BuildModelRequestData>*)this_00);
        *(undefined1*)(lVar1 + 659) = param_3;
        lVar1 = shared_ptr<BuildModelRequestData>::operator->((shared_ptr<BuildModelRequestData>*)this_00);
        *(undefined1*)(lVar1 + 660) = param_4;
        lVar1 = shared_ptr<BuildModelRequestData>::operator->((shared_ptr<BuildModelRequestData>*)this_00);
        *(undefined1*)(lVar1 + 661) = param_5;
    }

    // 0x100504ec0, 32 bytes, inline, placed by class name
    // BuildModelMain::SetExternalID(int)
    void BuildModelMain::SetExternalID(int param_1) {
        long lVar1;

        lVar1 = shared_ptr<BuildModelRequestData>::operator->((shared_ptr<BuildModelRequestData>*)field_112);
        *(int*)(lVar1 + 668) = param_1;
    }

    // 0x100529030, 32 bytes, inline, placed by class name
    // BuildModelMain::SetMirror(bool)
    void BuildModelMain::SetMirror(bool param_1) {
        long lVar1;

        lVar1 = shared_ptr<BuildModelRequestData>::operator->((shared_ptr<BuildModelRequestData>*)field_112);
        *(bool*)(lVar1 + 368) = param_1;
    }

    // 0x100529050, 32 bytes, inline, placed by class name
    // BuildModelMain::SetShareLight(bool)
    void BuildModelMain::SetShareLight(bool param_1) {
        long lVar1;

        lVar1 = shared_ptr<BuildModelRequestData>::operator->((shared_ptr<BuildModelRequestData>*)field_112);
        *(bool*)(lVar1 + 663) = param_1;
    }

    // 0x100529070, 48 bytes, inline, placed by class name
    // BuildModelMain::SetGlobalTranslation(math::Vector3T<float> const&)
    void BuildModelMain::SetGlobalTranslation(Vector3T* param_1) {
        long lVar1;

        lVar1 = shared_ptr<BuildModelRequestData>::operator->((shared_ptr<BuildModelRequestData>*)field_112);
        ((lVar1 + 320))->SetXYZ(param_1);
    }

    // 0x100546460, 80 bytes, inline, placed by class name
    // BuildModelMain::SetRecolor(Array<unsigned short, eastl::allocator> const&, Array<unsigned short, eastl::allocator> const&)
    void BuildModelMain::SetRecolor(Array* param_1, Array* param_2) {
        long lVar1;

        lVar1 = shared_ptr<BuildModelRequestData>::operator->((shared_ptr<BuildModelRequestData>*)field_112);
        Array<unsigned short, eastl::allocator>::operator=((Array<unsigned short, eastl::allocator>*)(lVar1 + 392),
                                                           param_1);
        lVar1 = shared_ptr<BuildModelRequestData>::operator->((shared_ptr<BuildModelRequestData>*)field_112);
        Array<unsigned short, eastl::allocator>::operator=((Array<unsigned short, eastl::allocator>*)(lVar1 + 416),
                                                           param_2);
    }

    // 0x1005464b0, 80 bytes, inline, placed by class name
    // BuildModelMain::SetRematerial(Array<unsigned short, eastl::allocator> const&, Array<unsigned short, eastl::allocator> const&)
    void BuildModelMain::SetRematerial(Array* param_1, Array* param_2) {
        long lVar1;

        lVar1 = shared_ptr<BuildModelRequestData>::operator->((shared_ptr<BuildModelRequestData>*)field_112);
        Array<unsigned short, eastl::allocator>::operator=((Array<unsigned short, eastl::allocator>*)(lVar1 + 464),
                                                           param_1);
        lVar1 = shared_ptr<BuildModelRequestData>::operator->((shared_ptr<BuildModelRequestData>*)field_112);
        Array<unsigned short, eastl::allocator>::operator=((Array<unsigned short, eastl::allocator>*)(lVar1 + 488),
                                                           param_2);
    }

    // 0x100546500, 112 bytes, inline, placed by class name
    // BuildModelMain::SetPlayerRecolor(Array<unsigned char, eastl::allocator> const&, Array<Array<unsigned short, eastl::allocator>, eastl::allocator> const&, Array<Array<Array<unsigned short, eastl::allocator>, eastl::allocator>, eastl::allocator> const&)
    void BuildModelMain::SetPlayerRecolor(Array* param_1, Array* param_2, Array* param_3) {
        long lVar1;
        undefined1* this_00;

        this_00 = field_112;
        lVar1 = shared_ptr<BuildModelRequestData>::operator->((shared_ptr<BuildModelRequestData>*)this_00);
        Array<unsigned char, eastl::allocator>::operator=((Array<unsigned char, eastl::allocator>*)(lVar1 + 512),
                                                          param_1);
        lVar1 = shared_ptr<BuildModelRequestData>::operator->((shared_ptr<BuildModelRequestData>*)this_00);
        Array<Array<unsigned short, eastl::allocator>, eastl::allocator>::operator=(
            (Array<Array<unsigned short, eastl::allocator>, eastl::allocator>*)(lVar1 + 536), param_2);
        lVar1 = shared_ptr<BuildModelRequestData>::operator->((shared_ptr<BuildModelRequestData>*)this_00);
        Array<Array<Array<unsigned short, eastl::allocator>, eastl::allocator>, eastl::allocator>::operator=(
            (Array<Array<Array<unsigned short, eastl::allocator>, eastl::allocator>, eastl::allocator>*)(lVar1 + 560),
            param_3);
    }

    // 0x1005465b0, 112 bytes, inline, placed by class name
    // BuildModelMain::SetPlayerRematerial(Array<unsigned char, eastl::allocator> const&, Array<Array<unsigned short, eastl::allocator>, eastl::allocator> const&, Array<Array<Array<unsigned short, eastl::allocator>, eastl::allocator>, eastl::allocator> const&)
    void BuildModelMain::SetPlayerRematerial(Array* param_1, Array* param_2, Array* param_3) {
        long lVar1;
        undefined1* this_00;

        this_00 = field_112;
        lVar1 = shared_ptr<BuildModelRequestData>::operator->((shared_ptr<BuildModelRequestData>*)this_00);
        Array<unsigned char, eastl::allocator>::operator=((Array<unsigned char, eastl::allocator>*)(lVar1 + 584),
                                                          param_1);
        lVar1 = shared_ptr<BuildModelRequestData>::operator->((shared_ptr<BuildModelRequestData>*)this_00);
        Array<Array<unsigned short, eastl::allocator>, eastl::allocator>::operator=(
            (Array<Array<unsigned short, eastl::allocator>, eastl::allocator>*)(lVar1 + 608), param_2);
        lVar1 = shared_ptr<BuildModelRequestData>::operator->((shared_ptr<BuildModelRequestData>*)this_00);
        Array<Array<Array<unsigned short, eastl::allocator>, eastl::allocator>, eastl::allocator>::operator=(
            (Array<Array<Array<unsigned short, eastl::allocator>, eastl::allocator>, eastl::allocator>*)(lVar1 + 632),
            param_3);
    }

    // 0x100546620, 32 bytes, inline, placed by class name
    // BuildModelMain::SetAmbientAdjust(unsigned short)
    void BuildModelMain::SetAmbientAdjust(ushort param_1) {
        long lVar1;

        lVar1 = shared_ptr<BuildModelRequestData>::operator->((shared_ptr<BuildModelRequestData>*)field_112);
        *(ushort*)(lVar1 + 656) = param_1;
    }

    // 0x100644f80, 16 bytes, complete-object destructor, inline, placed by class name
    // BuildModelMain::~BuildModelMain(): jumps straight to the base-object destructor

    // 0x100644f90, 32 bytes, deleting destructor, inline, placed by class name
    // BuildModelMain::~BuildModelMain()
    void BuildModelMain::~BuildModelMain() {
        ~BuildModelMain(this);
        operator_delete(this);
    }

    // 0x1006450f0, 64 bytes, base-object destructor, inline, placed by class name
    // BuildModelMain::~BuildModelMain()
    void BuildModelMain::~BuildModelMain() {
        field_0 = &PTR__BuildModelMain_100f0d578;
        field_112->~shared_ptr();
        field_96->~shared_ptr();
        ~AssetJob();
    }

} // namespace jag::game

namespace jag {
    // 0x100438240, 64 bytes, inline, placed by debug map only (low confidence)
    // game::ChangeLocationRequest* placement_new<game::ChangeLocationRequest, game::ChangeLocationRequestType, int, int, game::CoordGrid const&, game::LocData const&, int>(void*, game::ChangeLocationRequestType&&, int&&, int&&, game::CoordGrid const&, game::LocData const&, int&&)
    ChangeLocationRequest*
    jag::placement_new<game::ChangeLocationRequest, game::ChangeLocationRequestType, int, int, game::CoordGrid_const&,
                       game::LocData_const&, int>(void* param_1, ChangeLocationRequestType* param_2, int* param_3,
                                                  int* param_4, CoordGrid* param_5, LocData* param_6, int* param_7) {
        game::ChangeLocationRequest::ChangeLocationRequest(param_1, *(undefined4*)param_2, *param_3, *param_4, param_5,
                                                           param_6, *param_7 != 0);
        return param_1;
    }

    // 0x100438280, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::ChangeLocationRequest, MakeSharedPool<game::ChangeLocationRequest, 128> >* placement_new<MakeSharedPoolRefCounter<game::ChangeLocationRequest, MakeSharedPool<game::ChangeLocationRequest, 128> >, MakeSharedPool<game::ChangeLocationRequest, 128>::RefCounterAndData*&, game::ChangeLocationRequest*>(void*, MakeSharedPool<game::ChangeLocationRequest, 128>::RefCounterAndData*&, game::ChangeLocationRequest*&&)
    MakeSharedPoolRefCounter* jag::placement_new<
        MakeSharedPoolRefCounter<game::ChangeLocationRequest, MakeSharedPool<game::ChangeLocationRequest, 128>>,
        MakeSharedPool<game::ChangeLocationRequest, 128>::RefCounterAndData*&, game::ChangeLocationRequest*>(
        void* param_1, RefCounterAndData** param_2, ChangeLocationRequest** param_3) {
        MakeSharedPoolRefCounter<game::ChangeLocationRequest,
                                 MakeSharedPool<game::ChangeLocationRequest, 128>>::MakeSharedPoolRefCounter(param_1,
                                                                                                             *param_2,
                                                                                                             *param_3);
        return param_1;
    }

    // 0x1004394f0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::ChangeLocationRequest, MakeSharedPool<game::ChangeLocationRequest, 128> >::MakeSharedPoolRefCounter(void*, game::ChangeLocationRequest*): jumps straight to the base-object constructor

    // 0x100439500, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::ChangeLocationRequest, MakeSharedPool<game::ChangeLocationRequest, 128> >::MakeSharedPoolRefCounter(void*, game::ChangeLocationRequest*)
    void jag::MakeSharedPoolRefCounter<game::ChangeLocationRequest, MakeSharedPool<game::ChangeLocationRequest, 128>>::
        MakeSharedPoolRefCounter(MakeSharedPoolRefCounter<game::ChangeLocationRequest,
                                                          MakeSharedPool<game::ChangeLocationRequest, 128>>* this,
                                 void* param_1, ChangeLocationRequest* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7a90 + 16;
        *(void**)(this + 16) = param_1;
        *(ChangeLocationRequest**)(this + 24) = param_2;
    }

    // 0x100439540, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::ChangeLocationRequest, MakeSharedPool<game::ChangeLocationRequest, 128> >::DeleteSelf()
    void jag::MakeSharedPoolRefCounter<game::ChangeLocationRequest, MakeSharedPool<game::ChangeLocationRequest, 128>>::
        DeleteSelf(MakeSharedPoolRefCounter<game::ChangeLocationRequest,
                                            MakeSharedPool<game::ChangeLocationRequest, 128>>* this) {
        void* pvVar1;

        pvVar1 = *(void**)(this + 16);
        (*(code*)**(undefined8**)this)();
        MakeSharedPool<game::ChangeLocationRequest, 128>::deallocate(pvVar1);
    }

    // 0x100439b60, 64 bytes, inline, placed by debug map only (low confidence)
    // game::BuildSingleLocationMain* placement_new<game::BuildSingleLocationMain, int, shared_ptr<game::LocType>&, shared_ptr<game::LocType>&, shared_ptr<graphics::Model> const&, Rotation90, int&, Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>, Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL> >(void*, int&&, shared_ptr<game::LocType>&, shared_ptr<game::LocType>&, shared_ptr<graphics::Model> const&, Rotation90&&, int&, Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>&&, Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>&&)
    BuildSingleLocationMain*
    jag::placement_new<game::BuildSingleLocationMain, int, shared_ptr<game::LocType>&, shared_ptr<game::LocType>&,
                       shared_ptr<graphics::Model> const&, Rotation90, int&,
                       Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>,
                       Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>>(
        void* param_1, int* param_2, shared_ptr* param_3, shared_ptr* param_4, shared_ptr* param_5, Rotation90* param_6,
        int* param_7, Array* param_8, Array* param_9) {
        game::BuildSingleLocationMain::BuildSingleLocationMain(param_1, *param_2);
        return param_1;
    }

    // 0x100439ba0, 32 bytes, inline, placed by debug map only (low confidence)
    // BucketRefCounter<game::BuildSingleLocationMain>* placement_new<BucketRefCounter<game::BuildSingleLocationMain>, managed_ptr_counter_and_data<BucketRefCounter<game::BuildSingleLocationMain>, game::BuildSingleLocationMain>*&, game::BuildSingleLocationMain*&>(void*, managed_ptr_counter_and_data<BucketRefCounter<game::BuildSingleLocationMain>, game::BuildSingleLocationMain>*&, game::BuildSingleLocationMain*&)
    BucketRefCounter* jag::placement_new<
        BucketRefCounter<game::BuildSingleLocationMain>,
        managed_ptr_counter_and_data<BucketRefCounter<game::BuildSingleLocationMain>, game::BuildSingleLocationMain>*&,
        game::BuildSingleLocationMain*&>(void* param_1, managed_ptr_counter_and_data** param_2,
                                         BuildSingleLocationMain** param_3) {
        BucketRefCounter<game::BuildSingleLocationMain>::BucketRefCounter(param_1, *param_2, *param_3, 0);
        return param_1;
    }

    // 0x100439bc0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // BucketRefCounter<game::BuildSingleLocationMain>::BucketRefCounter(void*, game::BuildSingleLocationMain*, unsigned int): jumps straight to the base-object constructor

    // 0x100439bd0, 96 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // BucketRefCounter<game::BuildSingleLocationMain>::BucketRefCounter(void*, game::BuildSingleLocationMain*, unsigned int)
    void BucketRefCounter<game::BuildSingleLocationMain>::BucketRefCounter(void* param_1,
                                                                           BuildSingleLocationMain* param_2,
                                                                           uint param_3) {
        undefined8 uVar1;

        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7108 + 16;
        *(void**)(this + 16) = param_1;
        *(BuildSingleLocationMain**)(this + 24) = param_2;
        uVar1 = this_thread::GetThreadID();
        *(undefined8*)(this + 32) = uVar1;
        *(uint*)(this + 40) = param_3;
    }

    // 0x100439c30, 96 bytes, inline, placed by debug map only (low confidence)
    // BucketRefCounter<game::BuildSingleLocationMain>::DeleteSelf()
    void BucketRefCounter<game::BuildSingleLocationMain>::DeleteSelf() {
        void* pvVar1;

        if (*(int*)(this + 40) != 4) {
            if (this_thread::GetThreadID() != *(long*)(this + 32)) {
                /* WARNING: Subroutine does not return */
                LogAssert("this_thread::GetThreadID() == m_threadID",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                          "make_shared.h",
                          237, (char*)0);
            }
        }
        pvVar1 = *(void**)(this + 16);
        (*(code*)**(undefined8**)this)(this);
        BucketManager::DeAllocate(pvVar1);
    }

} // namespace jag

namespace jag::math {
    // 0x100438040, 80 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // Matrix44T<float>::Matrix44T(QuaternionT<float> const&, Vector3T<float> const&)
    void Matrix44T<float>::Matrix44T(QuaternionT* param_1, Vector3T* param_2) {
        long lVar1;

        lVar1 = 0;
        do {
            new ((this + lVar1)) Vector4T<float>();
            lVar1 = lVar1 + 16;
        } while (lVar1 != 64);
        Set(this, param_1, param_2);
    }

    // 0x100438090, 64 bytes, inline, placed by debug map only (low confidence)
    // Matrix44T<float>::Set(QuaternionT<float> const&, Vector3T<float> const&)
    Matrix44T<float>* Matrix44T<float>::Set(QuaternionT* param_1, Vector3T* param_2) {
        Matrix33T<float> local_48[40];

        Matrix33T<float>::Matrix33T(local_48, param_1);
        Set(this, local_48, param_2);
        return this;
    }

} // namespace jag::math

namespace jag::graphics {
    // 0x1004398e0, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // ModelUpdateManager::~ModelUpdateManager(): jumps straight to the base-object destructor

    // 0x1004398f0, 32 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // ModelUpdateManager::~ModelUpdateManager()
    void ModelUpdateManager::~ModelUpdateManager() {
        ~vector();
        ~AutoSingleton();
    }

} // namespace jag::graphics
