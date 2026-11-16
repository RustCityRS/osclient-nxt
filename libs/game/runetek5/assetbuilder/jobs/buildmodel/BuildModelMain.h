// libs/game/runetek5/assetbuilder/jobs/buildmodel/BuildModelMain.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class BuildModelMain : public AssetJob // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~BuildModelMain();
        virtual uint8_t* RunFirst(Js5ResourceProvider* js5ResourceProvider, ConfigProvider* configProvider);
        virtual BuildModelMain* CreateWorker();
        virtual auto DecodeResult(const shared_ptr<void>& arg1);
        virtual shared_ptr GetRequestData();
        shared_ptr GetConstructedAsset() const;
        bool IsAssetConstructed() const;
        void SetUseUncompressedTextures(bool arg1);
        void SetScale(const eastl::vector<float>& arg1);
        void SetRotation(const eastl::vector<math::Vector3T<float>>& vector3s);
        void SetTranslation(const eastl::vector<math::Vector3T<float>>& vector3s);
        void SetModelRecolour(const eastl::vector<eastl::vector<int>>& arg1);
        void SetModelRematerial(const eastl::vector<eastl::vector<int>>& arg1);
        void SetOffset(eastl::vector<math::Vector3T<float>>&& vector3s);
        void SetResize(const math::Vector3T<float>& vector3);
        void SetCustomRecolor(const Array<unsigned short>& arg1, const Array<unsigned short>& arg2);
        void SetRecolorPalette(const Array<unsigned char>& arg1);
        void SetTint(signed char arg1, signed char arg2, signed char arg3, unsigned char arg4);
        void SetExternalID(int arg1);
        void SetMirror(bool arg1);
        void SetShareLight(bool arg1);
        void SetGlobalTranslation(const math::Vector3T<float>& vector3);
        void SetRecolor(const Array<unsigned short>& arg1, const Array<unsigned short>& arg2);
        void SetRematerial(const Array<unsigned short>& arg1, const Array<unsigned short>& arg2);
        void SetPlayerRecolor(const Array<unsigned char>& arg1, const Array<Array<unsigned short>>& arg2,
                              const Array<Array<Array<unsigned short>>>& arg3);
        void SetPlayerRematerial(const Array<unsigned char>& arg1, const Array<Array<unsigned short>>& arg2,
                                 const Array<Array<Array<unsigned short>>>& arg3);
        void SetAmbientAdjust(unsigned short arg1);
        BuildModelMain(int arg1, graphics::ModelConstructedState arg2, bool arg3, graphics::RT7Core* arg4,
                       eastl::fixed_vector<PacketView, 1ul>&& arg5, const shared_ptr<graphics::Model>& arg6);
        void PostDecodeResultSetup(BuildModelResultData& buildModelResultData);

    private:
        uint8_t _unknown_72[8];
        BuildModelResultData field_80;
        uint8_t _unknown_81[7];
        RT7Core* field_88;
        shared_ptr m_constructedAsset;
        shared_ptr m_requestData;
    };

    // 0x100436c80
    bool BuildModelMain::IsAssetConstructed() const {
        uint8_t bVar2;
        bool bVar3;

        if (m_constructedAsset->operator_cast_to_bool() == '\0') {
            bVar3 = false;
        } else {
            bVar2 = ((Model*)(*m_constructedAsset).operator->())->GetConstructedState();
            bVar3 = (uint8_t)field_80[0] <= bVar2;
        }
        return bVar3;
    }

    // 0x1004e10e0
    void BuildModelMain::SetUseUncompressedTextures(bool arg1) {
        long lVar1 = (*m_requestData).operator->();
        *(bool*)(lVar1 + 664) = arg1;
    }

    // 0x100504c90
    void BuildModelMain::SetScale(const eastl::vector<float>& arg1) {
        long lVar1 = (*m_requestData).operator->();
        (*((lVar1 + 160))) = arg1;
    }

    // 0x100504cc0
    void BuildModelMain::SetRotation(const eastl::vector<math::Vector3T<float>>& vector3s) {
        long lVar1 = (*m_requestData).operator->();
        (*((lVar1 + 192))) = vector3s;
    }

    // 0x100504cf0
    void BuildModelMain::SetTranslation(const eastl::vector<math::Vector3T<float>>& vector3s) {
        long lVar1 = (*m_requestData).operator->();
        (*((lVar1 + 224))) = vector3s;
    }

    // 0x100504d20
    void BuildModelMain::SetModelRecolour(const eastl::vector<eastl::vector<int>>& arg1) {
        long lVar1 = (*m_requestData).operator->();
        (*((lVar1 + 256))) = arg1;
    }

    // 0x100504d50
    void BuildModelMain::SetModelRematerial(const eastl::vector<eastl::vector<int>>& arg1) {
        long lVar1 = (*m_requestData).operator->();
        (*((lVar1 + 288))) = arg1;
    }

    // 0x100504d80
    void BuildModelMain::SetOffset(eastl::vector<math::Vector3T<float>>&& vector3s) {
        long lVar1 = (*m_requestData).operator->();
        (*((lVar1 + 336))) = vector3s;
    }

    // 0x100504db0
    void BuildModelMain::SetResize(const math::Vector3T<float>& vector3) {
        long lVar1 = (*m_requestData).operator->();
        ((lVar1 + 372))->SetXYZ(vector3);
    }

    // 0x100504de0
    void BuildModelMain::SetCustomRecolor(const Array<unsigned short>& arg1, const Array<unsigned short>& arg2) {
        long lVar1 = (*m_requestData).operator->();
        *(uint8_t*)(lVar1 + 384) = 1;
        SetRecolor(arg1, arg2);
    }

    // 0x100504e20
    void BuildModelMain::SetRecolorPalette(const Array<unsigned char>& arg1) {
        long lVar1 = (*m_requestData).operator->();
        (*((lVar1 + 440))) = arg1;
    }

    // 0x100504e50
    void BuildModelMain::SetTint(signed char arg1, signed char arg2, signed char arg3, unsigned char arg4) {
        uint8_t* this_00 = m_requestData;
        long lVar1 = (*this_00).operator->();
        *(schar*)(lVar1 + 658) = arg1;
        lVar1 = (*this_00).operator->();
        *(schar*)(lVar1 + 659) = arg2;
        lVar1 = (*this_00).operator->();
        *(schar*)(lVar1 + 660) = arg3;
        lVar1 = (*this_00).operator->();
        *(unsigned char*)(lVar1 + 661) = arg4;
    }

    // 0x100504ec0
    void BuildModelMain::SetExternalID(int arg1) {
        long lVar1 = (*m_requestData).operator->();
        *(int*)(lVar1 + 668) = arg1;
    }

    // 0x100529030
    void BuildModelMain::SetMirror(bool arg1) {
        long lVar1 = (*m_requestData).operator->();
        *(bool*)(lVar1 + 368) = arg1;
    }

    // 0x100529050
    void BuildModelMain::SetShareLight(bool arg1) {
        long lVar1 = (*m_requestData).operator->();
        *(bool*)(lVar1 + 663) = arg1;
    }

    // 0x100529070
    void BuildModelMain::SetGlobalTranslation(const math::Vector3T<float>& vector3) {
        long lVar1 = (*m_requestData).operator->();
        ((lVar1 + 320))->SetXYZ(vector3);
    }

    // 0x100546460
    void BuildModelMain::SetRecolor(const Array<unsigned short>& arg1, const Array<unsigned short>& arg2) {
        long lVar1 = (*m_requestData).operator->();
        (*((lVar1 + 392))) = arg1;
        lVar1 = (*m_requestData).operator->();
        (*((lVar1 + 416))) = arg2;
    }

    // 0x1005464b0
    void BuildModelMain::SetRematerial(const Array<unsigned short>& arg1, const Array<unsigned short>& arg2) {
        long lVar1 = (*m_requestData).operator->();
        (*((lVar1 + 464))) = arg1;
        lVar1 = (*m_requestData).operator->();
        (*((lVar1 + 488))) = arg2;
    }

    // 0x100546500
    void BuildModelMain::SetPlayerRecolor(const Array<unsigned char>& arg1, const Array<Array<unsigned short>>& arg2,
                                          const Array<Array<Array<unsigned short>>>& arg3) {
        uint8_t* this_00 = m_requestData;
        long lVar1 = (*this_00).operator->();
        (*((lVar1 + 512))) = arg1;
        lVar1 = (*this_00).operator->();
        (*((lVar1 + 536))) = arg2;
        lVar1 = (*this_00).operator->();
        (*((lVar1 + 560))) = arg3;
    }

    // 0x1005465b0
    void BuildModelMain::SetPlayerRematerial(const Array<unsigned char>& arg1, const Array<Array<unsigned short>>& arg2,
                                             const Array<Array<Array<unsigned short>>>& arg3) {
        uint8_t* this_00 = m_requestData;
        long lVar1 = (*this_00).operator->();
        (*((lVar1 + 584))) = arg1;
        lVar1 = (*this_00).operator->();
        (*((lVar1 + 608))) = arg2;
        lVar1 = (*this_00).operator->();
        (*((lVar1 + 632))) = arg3;
    }

    // 0x100546620
    void BuildModelMain::SetAmbientAdjust(unsigned short arg1) {
        long lVar1 = (*m_requestData).operator->();
        *(unsigned short*)(lVar1 + 656) = arg1;
    }

    // 0x1006450f0
    BuildModelMain::~BuildModelMain() {
        m_requestData->~shared_ptr();
        m_constructedAsset->~shared_ptr();
    }

} // namespace jag::game

namespace jag {
    // 0x100438240
    game::ChangeLocationRequest*
    placement_new<game::ChangeLocationRequest, game::ChangeLocationRequestType, int, int, game::CoordGrid const&,
                  game::LocData const&, int>(void* arg1, game::ChangeLocationRequestType&& changeLocationRequestType,
                                             int&& arg3, int&& arg4, const game::CoordGrid& coordGrid,
                                             const game::LocData& locData, int&& arg7) {
        new (arg1) game::ChangeLocationRequest(*(uint32_t*)changeLocationRequestType, arg3, arg4, coordGrid, locData,
                                               arg7 != 0);
        return arg1;
    }

    // 0x100438280
    MakeSharedPoolRefCounter<game::ChangeLocationRequest, MakeSharedPool<game::ChangeLocationRequest, 128>>*
    placement_new<
        MakeSharedPoolRefCounter<game::ChangeLocationRequest, MakeSharedPool<game::ChangeLocationRequest, 128>>,
        MakeSharedPool<game::ChangeLocationRequest, 128>::RefCounterAndData*&, game::ChangeLocationRequest*>(
        void* arg1, MakeSharedPool<game::ChangeLocationRequest, 128>::RefCounterAndData*& arg2,
        game::ChangeLocationRequest*&& arg3) {
        new (arg1)
            MakeSharedPoolRefCounter<game::ChangeLocationRequest, MakeSharedPool<game::ChangeLocationRequest, 128>>(
                arg2, arg3);
        return arg1;
    }

    // 0x100439500
    MakeSharedPoolRefCounter<game::ChangeLocationRequest, MakeSharedPool<game::ChangeLocationRequest, 128>>::
        MakeSharedPoolRefCounter(void* arg1, game::ChangeLocationRequest* changeLocationRequest)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee7a90 + 16;
        *(void**)(this + 16) = arg1;
        *(ChangeLocationRequest**)(this + 24) = changeLocationRequest;
    }

    // 0x100439540
    void MakeSharedPoolRefCounter<game::ChangeLocationRequest,
                                  MakeSharedPool<game::ChangeLocationRequest, 128>>::DeleteSelf() {
        void* arg1 = *(void**)(this + 16);
        (*(void (*)(...)) * *(uint64_t**)this)();
        MakeSharedPool<game::ChangeLocationRequest, 128>::deallocate(arg1);
    }

    // 0x100439b60
    game::BuildSingleLocationMain*
    placement_new<game::BuildSingleLocationMain, int, shared_ptr<game::LocType>&, shared_ptr<game::LocType>&,
                  shared_ptr<graphics::Model> const&, Rotation90, int&,
                  Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>,
                  Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>>(
        void* arg1, int&& arg2, shared_ptr<game::LocType>& locType1, shared_ptr<game::LocType>& locType2,
        const shared_ptr<graphics::Model>& model, Rotation90&& rotation90, int& arg7,
        Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>&& arg8,
        Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>&& arg9) {
        new (arg1) game::BuildSingleLocationMain(arg2, locType1, locType2, model,
                                                 (unsigned int)(uint8_t)(char)*rotation90, arg7, arg8, arg9);
        return arg1;
    }

    // 0x100439ba0
    BucketRefCounter<game::BuildSingleLocationMain>* placement_new<
        BucketRefCounter<game::BuildSingleLocationMain>,
        managed_ptr_counter_and_data<BucketRefCounter<game::BuildSingleLocationMain>, game::BuildSingleLocationMain>*&,
        game::BuildSingleLocationMain*&>(void* arg1,
                                         managed_ptr_counter_and_data<BucketRefCounter<game::BuildSingleLocationMain>,
                                                                      game::BuildSingleLocationMain>*& arg2,
                                         game::BuildSingleLocationMain*& arg3) {
        new (arg1) BucketRefCounter<game::BuildSingleLocationMain>(arg2, arg3, 0);
        return arg1;
    }

    // 0x100439bd0
    BucketRefCounter<game::BuildSingleLocationMain>::BucketRefCounter(
        void* arg1, game::BuildSingleLocationMain* buildSingleLocationMain, unsigned int arg3)
        : ref_counter_base() {}

    // 0x100439c30
    void BucketRefCounter<game::BuildSingleLocationMain>::DeleteSelf() {
        BucketRefCounter<game::BuildSingleLocationMain> _vtbl* pBVar1;

        if (*(int*)&this[5]._vptr != 4) {
            pBVar1 = (BucketRefCounter<game::BuildSingleLocationMain> _vtbl*)this_thread::GetThreadID();
            if (pBVar1 != this[4]._vptr) {
                LogAssert("this_thread::GetThreadID() == m_threadID",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                          "make_shared.h",
                          237, nullptr);
            }
        }
        pBVar1 = this[2]._vptr;
        std::destroy_at(this);
        BucketManager::DeAllocate(pBVar1);
    }

} // namespace jag

namespace jag::math {
    // 0x100438040
    Matrix44T<float>::Matrix44T(const QuaternionT<float>& quaternion, const Vector3T<float>& vector3) {
        long lVar1 = 0;
        do {
            new ((this + lVar1)) Vector4T();
            lVar1 = lVar1 + 16;
        } while (lVar1 != 64);
        Set((ReturnValue*)this, quaternion, vector3);
    }

    // 0x100438090
    auto Matrix44T<float>::Set(const QuaternionT<float>& quaternion, const Vector3T<float>& vector3) {
        auto result;

        Matrix33T<float> local_48(quaternion);
        Set(&result, &local_48, vector3);
        return result;
    }

} // namespace jag::math

namespace jag::graphics {
    // 0x1004398f0
    ModelUpdateManager::~ModelUpdateManager() {}

} // namespace jag::graphics
