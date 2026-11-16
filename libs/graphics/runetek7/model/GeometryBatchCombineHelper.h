// libs/graphics/runetek7/model/GeometryBatchCombineHelper.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.oldscape.jagex3

namespace jag {
    // 0x100372f70
    oldscape::dash3d::ModelRSevenLit*
    placement_new<oldscape::dash3d::ModelRSevenLit, oldscape::dash3d::ModelRSevenLit&>(
        void* arg1, oldscape::dash3d::ModelRSevenLit& modelRSevenLit) {
        new (arg1) oldscape::dash3d::ModelRSevenLit(modelRSevenLit);
        return arg1;
    }

    // 0x100372f90
    ref_counter_shared<oldscape::dash3d::ModelRSevenLit>*
    placement_new<ref_counter_shared<oldscape::dash3d::ModelRSevenLit>, int, oldscape::dash3d::ModelRSevenLit*&>(
        void* arg1, int&& arg2, oldscape::dash3d::ModelRSevenLit*& arg3) {
        new (arg1) ref_counter_shared<oldscape::dash3d::ModelRSevenLit>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100373070
    ref_counter_shared<oldscape::dash3d::ModelRSevenLit>::ref_counter_shared(
        unsigned long arg1, oldscape::dash3d::ModelRSevenLit* modelRSevenLit)
        : ref_counter_base() {}

    // 0x1003730b0
    void ref_counter_shared<oldscape::dash3d::ModelRSevenLit>::DeleteData() {
        ref_counter_shared<oldscape::dash3d::ModelRSevenUnlit> _vtbl* prVar1;
        long lVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar2 = 0;
                prVar1 = nullptr;
                do {
                    ((ModelRSevenLit*)((long)&(this[3]._vptr)->_dtor + lVar2))->~ModelRSevenLit();
                    prVar1 = (ref_counter_shared<oldscape::dash3d::ModelRSevenUnlit> _vtbl*)((long)&prVar1->_dtor + 1);
                    lVar2 = lVar2 + 104;
                } while (prVar1 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x100374110
    ref_counter_shared<oldscape::dash3d::ModelLitImpl>*
    placement_new<ref_counter_shared<oldscape::dash3d::ModelLitImpl>, int, oldscape::dash3d::ModelLitImpl*&>(
        void* arg1, int&& arg2, oldscape::dash3d::ModelLitImpl*& arg3) {
        new (arg1) ref_counter_shared<oldscape::dash3d::ModelLitImpl>((long)*arg2, arg3);
        return arg1;
    }

    // 0x1003747c0
    ref_counter_shared<oldscape::dash3d::ModelLitImpl>::ref_counter_shared(unsigned long arg1,
                                                                           oldscape::dash3d::ModelLitImpl* modelLitImpl)
        : ref_counter_base() {}

    // 0x100374800
    void ref_counter_shared<oldscape::dash3d::ModelLitImpl>::DeleteData() {
        ref_counter_shared<oldscape::dash3d::ModelLitImpl> _vtbl* prVar1;
        long lVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar2 = 0;
                prVar1 = nullptr;
                do {
                    ((ModelLitImpl*)((long)&(this[3]._vptr)->_dtor + lVar2))->~ModelLitImpl();
                    prVar1 = (ref_counter_shared<oldscape::dash3d::ModelLitImpl> _vtbl*)((long)&prVar1->_dtor + 1);
                    lVar2 = lVar2 + 768;
                } while (prVar1 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x100374c40
    oldscape::dash3d::OperationBuffer::OperationImpl*
    placement_new<oldscape::dash3d::OperationBuffer::OperationImpl>(void* arg1) {
        new (arg1) oldscape::dash3d::OperationBuffer::OperationImpl();
        return arg1;
    }

    // 0x100374c60
    ref_counter_shared<oldscape::dash3d::OperationBuffer::OperationImpl>*
    placement_new<ref_counter_shared<oldscape::dash3d::OperationBuffer::OperationImpl>, int,
                  oldscape::dash3d::OperationBuffer::OperationImpl*&>(
        void* arg1, int&& arg2, oldscape::dash3d::OperationBuffer::OperationImpl*& arg3) {
        new (arg1) ref_counter_shared<oldscape::dash3d::OperationBuffer::OperationImpl>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100374ef0
    ref_counter_shared<oldscape::dash3d::OperationBuffer::OperationImpl>::ref_counter_shared(
        unsigned long arg1, oldscape::dash3d::OperationBuffer::OperationImpl* operationImpl)
        : ref_counter_base() {}

    // 0x100374f30
    void ref_counter_shared<oldscape::dash3d::OperationBuffer::OperationImpl>::DeleteData() {
        ref_counter_shared<oldscape::dash3d::OperationBuffer::OperationImpl> _vtbl* prVar1;
        long lVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar2 = 0;
                prVar1 = nullptr;
                do {
                    ((OperationImpl*)((long)&(this[3]._vptr)->_dtor + lVar2))->~OperationImpl();
                    prVar1 = (ref_counter_shared<oldscape::dash3d::OperationBuffer::OperationImpl> _vtbl*)((long)&prVar1
                                                                                                               ->_dtor +
                                                                                                           1);
                    lVar2 = lVar2 + 224;
                } while (prVar1 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x100375650
    oldscape::ClientLocAnim*
    placement_new<oldscape::ClientLocAnim, int&, int, int&, int&, int&, int&, int&, bool&, decltype(nullptr), int&>(
        void* arg1, int& arg2, int&& arg3, int& arg4, int& arg5, int& arg6, int& arg7, int& arg8, bool& arg9,
        decltype(nullptr)&& arg10, int& arg11) {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_58;
        new (arg1) oldscape::ClientLocAnim((int)arg2, (int)arg3, (int)arg4, (int)arg5, (int)arg6, (int)arg7, (int)arg8,
                                           (bool)arg9, &local_58, arg11);
        return arg1;
    }

    // 0x100375710
    oldscape::ClientLocAnim*
    placement_new<oldscape::ClientLocAnim, int&, int&, int&, int&, int&, int&, int&, bool&, decltype(nullptr), int&>(
        void* arg1, int& arg2, int& arg3, int& arg4, int& arg5, int& arg6, int& arg7, int& arg8, bool& arg9,
        decltype(nullptr)&& arg10, int& arg11) {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_58;
        new (arg1) oldscape::ClientLocAnim((int)arg2, (int)arg3, (int)arg4, (int)arg5, (int)arg6, (int)arg7, (int)arg8,
                                           (bool)arg9, &local_58, arg11);
        return arg1;
    }

    // 0x1003757d0
    oldscape::ClientLocAnim*
    placement_new<oldscape::ClientLocAnim, int&, int, int, int&, int&, int&, int&, bool&, decltype(nullptr), int&>(
        void* arg1, int& arg2, int&& arg3, int&& arg4, int& arg5, int& arg6, int& arg7, int& arg8, bool& arg9,
        decltype(nullptr)&& arg10, int& arg11) {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_58;
        new (arg1) oldscape::ClientLocAnim((int)arg2, (int)arg3, (int)arg4, (int)arg5, (int)arg6, (int)arg7, (int)arg8,
                                           (bool)arg9, &local_58, arg11);
        return arg1;
    }

    // 0x100375890
    oldscape::ClientLocAnim* placement_new<oldscape::ClientLocAnim, int&, int, int&, int&, int&, int&, int const&,
                                           bool&, decltype(nullptr), int&>(void* arg1, int& arg2, int&& arg3, int& arg4,
                                                                           int& arg5, int& arg6, int& arg7,
                                                                           const int& arg8, bool& arg9,
                                                                           decltype(nullptr)&& arg10, int& arg11) {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_58;
        new (arg1) oldscape::ClientLocAnim((int)arg2, (int)arg3, (int)arg4, (int)arg5, (int)arg6, (int)arg7, (int)arg8,
                                           (bool)arg9, &local_58, arg11);
        return arg1;
    }

    // 0x100375950
    oldscape::ClientLocAnim* placement_new<oldscape::ClientLocAnim, int&, int&, int&, int&, int&, int&, int const&,
                                           bool&, decltype(nullptr), int&>(void* arg1, int& arg2, int& arg3, int& arg4,
                                                                           int& arg5, int& arg6, int& arg7,
                                                                           const int& arg8, bool& arg9,
                                                                           decltype(nullptr)&& arg10, int& arg11) {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_58;
        new (arg1) oldscape::ClientLocAnim((int)arg2, (int)arg3, (int)arg4, (int)arg5, (int)arg6, (int)arg7, (int)arg8,
                                           (bool)arg9, &local_58, arg11);
        return arg1;
    }

    // 0x100375a10
    oldscape::ClientLocAnim* placement_new<oldscape::ClientLocAnim, int&, int, int, int&, int&, int&, int const&, bool&,
                                           decltype(nullptr), int&>(void* arg1, int& arg2, int&& arg3, int&& arg4,
                                                                    int& arg5, int& arg6, int& arg7, const int& arg8,
                                                                    bool& arg9, decltype(nullptr)&& arg10, int& arg11) {

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_58;
        new (arg1) oldscape::ClientLocAnim((int)arg2, (int)arg3, (int)arg4, (int)arg5, (int)arg6, (int)arg7, (int)arg8,
                                           (bool)arg9, &local_58, arg11);
        return arg1;
    }

    // 0x100375b70
    PacketT<Array<unsigned char, BucketAllocatorEASTL>>::Bit::Bit(
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>& arg1) {
        *(PacketT<Array<unsigned char, BucketAllocatorEASTL> _>**)this = arg1;
        *(int*)(this + 8) = *(int*)(arg1 + 24) << 3;
    }

    // 0x100376730
    oldscape::dash3d::Skeleton*
    placement_new<oldscape::dash3d::Skeleton, oldscape::PacketJ<Array<unsigned char>>&, int&>(
        void* arg1, oldscape::PacketJ<Array<unsigned char>>& packetJ, int& arg3) {
        new (arg1) oldscape::dash3d::Skeleton(packetJ, arg3);
        return arg1;
    }

    // 0x100376750
    ref_counter_shared<oldscape::dash3d::Skeleton>*
    placement_new<ref_counter_shared<oldscape::dash3d::Skeleton>, int, oldscape::dash3d::Skeleton*&>(
        void* arg1, int&& arg2, oldscape::dash3d::Skeleton*& arg3) {
        new (arg1) ref_counter_shared<oldscape::dash3d::Skeleton>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100376780
    ref_counter_shared<oldscape::dash3d::Skeleton>::ref_counter_shared(unsigned long arg1,
                                                                       oldscape::dash3d::Skeleton* skeleton)
        : ref_counter_base() {}

    // 0x1003767c0
    void ref_counter_shared<oldscape::dash3d::Skeleton>::DeleteData() {
        ref_counter_shared<oldscape::dash3d::Skeleton> _vtbl* prVar1;
        long lVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar2 = 0;
                prVar1 = nullptr;
                do {
                    ((Skeleton*)((long)&(this[3]._vptr)->_dtor + lVar2))->~Skeleton();
                    prVar1 = (ref_counter_shared<oldscape::dash3d::Skeleton> _vtbl*)((long)&prVar1->_dtor + 1);
                    lVar2 = lVar2 + 32;
                } while (prVar1 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

} // namespace jag

namespace jag::oldscape::dash3d {
    // 0x100372f40
    ModelRSevenUnlit::~ModelRSevenUnlit() {
        field_24->~ModelRSevenCommon();
        destruct<highlight::NpcUID*>();
    }

    // 0x100372f40: ModelRSevenLit::~ModelRSevenLit() has the same machine code as ModelRSevenUnlit::~ModelRSevenUnlit()

    // 0x100372fc0
    ModelRSevenLit::ModelRSevenLit(const ModelRSevenLit& modelRSevenLit)
        : ModelLit(modelRSevenLit), field_24(modelRSevenLit.field_24),
          m_radiusCylinder(modelRSevenLit.m_radiusCylinder) {}

    // 0x100373160
    ModelLitImpl::~ModelLitImpl() {
        field_752.~weak_ptr();
        field_528.~fixed_hash_map();
        field_472.~shared_ptr();
        field_456.~shared_ptr();
        field_440.~shared_ptr();
        field_424.~shared_ptr();
        field_408.~shared_ptr();
        field_392.~shared_ptr();
        field_368.~Array();
        field_344.~Array();
        field_320.~Array();
        field_296->~shared_ptr();
        field_280->~shared_ptr();
        field_264->~shared_ptr();
        field_248->~shared_ptr();
        field_224.~Array();
        field_200.~Array();
        field_176.~Array();
        field_152.~Array();
        field_128.~Array();
        field_104.~Array();
        field_72.~Array();
        field_48.~Array();
        field_24.~Array();
        destruct<highlight::NpcUID*>();
    }

    // 0x100373290
    ModelUnlitImpl::~ModelUnlitImpl() {
        field_560.~shared_ptr();
        field_544.~shared_ptr();
        field_528.~shared_ptr();
        field_512.~shared_ptr();
        field_496.~shared_ptr();
        field_480.~shared_ptr();
        field_464.~shared_ptr();
        field_448.~shared_ptr();
        field_432.~shared_ptr();
        field_416.~shared_ptr();
        field_392.~Array();
        field_368.~Array();
        field_344.~Array();
        field_320.~Array();
        field_288.~SharedArray();
        field_272.~shared_ptr();
        field_256.~shared_ptr();
        field_240.~shared_ptr();
        field_224.~shared_ptr();
        field_208.~shared_ptr();
        field_192.~shared_ptr();
        field_176.~shared_ptr();
        field_152.~Array();
        field_128.~Array();
        field_104.~Array();
        field_72.~Array();
        field_48.~Array();
        field_24.~Array();
        destruct<highlight::NpcUID*>();
    }

    // 0x100374170
    ModelLitImpl::ModelLitImpl() : ModelLit(), field_20(0), field_96(0) {
        hash<int> local_48;
        equal_to<int> local_40;

        field_312[0] = 0;
        field_316 = 0;
        new (&field_320) Array<int>();
        new (&field_344) Array<int>();
        new (&field_368) Array<int>();
        new (&field_392) shared_ptr();
        new (&field_408) shared_ptr();
        new (&field_424) shared_ptr();
        new (&field_440) shared_ptr();
        new (&field_456) shared_ptr();
        new (&field_472) shared_ptr();
        field_488 = AllocModelId();
        field_492 = 1;
        field_496 = 4294967295;
        field_500 = 0;
        field_504 = 0;
        field_508 = 0;
        m_radiusCylinder = 0;
        field_516 = 0;
        field_520 = 0;
        new (&field_528)
            eastl::fixed_hash_map<int, ModelLit::AABB, 1ul, 2ul, true, eastl::hash<int>, eastl::equal_to<int>, false>(
                local_48, local_40);
        field_747 = '\0';
        field_748 = 0;
        new (&field_752) shared_ptr();
    }

    // 0x100374c90
    OperationBuffer::OperationImpl::OperationImpl() : eastl::vector<shared_ptr<Operation>>() {
        *(uint16_t*)(field_176 + 32) = 0;
    }

    // 0x100374f90
    OperationBuffer::OperationImpl::~OperationImpl() {
        field_64->~ResolvedModel();
        field_32.~vector();
    }

} // namespace jag::oldscape::dash3d

namespace jag::graphics {
    class GeometryBatchCombineHelper {
    public:
        int GetVertexCount() const;
        int GetIndexCount() const;
        ~GeometryBatchCombineHelper();
        GeometryBatchCombineHelper(GeometryBatchInstance* geometryBatchInstance, int arg2, bool arg3);
        void Reset(GeometryBatchInstance* geometryBatchInstance, int arg2, bool arg3);
        bool IsCombinableWith(const GeometryBatchInstance& geometryBatchInstance) const;
        void Combine(const GeometryBatchInstance& geometryBatchInstance);
        void FinishCombine();
        GeometryBatchCombineHelper(GeometryBatchCombineHelper&& geometryBatchCombineHelper);

    private:
        GeometryBatchInstance* field_0;
        bool field_8;
        uint8_t field_9[3];
        int m_indexCount;
        int m_vertexCount;
        unsigned int field_20;
        unsigned int field_24;
        uint32_t field_28;
        GeometryBatchInstance* field_32;
        uint8_t _unknown_40[8];
    };

    // 0x100372c10
    GeometryBatchCombineHelper::~GeometryBatchCombineHelper() {
        field_40.~vector();
    }

    // 0x10084a020
    GeometryBatchCombineHelper::GeometryBatchCombineHelper(GeometryBatchCombineHelper&& geometryBatchCombineHelper)
        : field_32(geometryBatchCombineHelper.field_32) {
        GeometryBatchInstance* pGVar1 = geometryBatchCombineHelper.field_0;
        bool bVar5 = geometryBatchCombineHelper.field_8;
        uint32_t uVar6 = geometryBatchCombineHelper.field_9;
        int iVar7 = geometryBatchCombineHelper.m_indexCount;
        unsigned int uVar2 = geometryBatchCombineHelper.field_20;
        unsigned int uVar3 = geometryBatchCombineHelper.field_24;
        uint32_t uVar4 = geometryBatchCombineHelper.field_28;
        m_vertexCount = geometryBatchCombineHelper.m_vertexCount;
        field_20 = uVar2;
        field_24 = uVar3;
        field_28 = uVar4;
        field_0 = pGVar1;
        field_8 = bVar5;
        field_9 = uVar6;
        m_indexCount = iVar7;
        new (&field_40)
            eastl::vector<GeometryBatchInstance const*, BucketAllocatorEASTL>(geometryBatchCombineHelper.field_40);
    }

} // namespace jag::graphics

namespace {
    class MatchPatternStackFrame {
    public:
        MatchPatternStackFrame(const char* str1, const char* str2);
    };

    // 0x100375ee0
    MatchPatternStackFrame::MatchPatternStackFrame(const char* str1, const char* str2) {
        *(char**)this = str1;
        *(char**)(this + 8) = str2;
    }

} // namespace

namespace jag::math {
    // 0x100373580
    Matrix43T<float>::Matrix43T(Vector3T<float>&& vector31, Vector3T<float>&& vector32, Vector3T<float>&& vector33,
                                Vector3T<float>&& vector34) {
        long lVar1 = 0;
        do {
            new ((this + lVar1)) Vector3T();
            lVar1 = lVar1 + 12;
        } while (lVar1 != 48);
        SetXYZ(vector31);
        ((this + 12))->SetXYZ(vector32);
        ((this + 24))->SetXYZ(vector33);
        ((this + 36))->SetXYZ(vector34);
    }

} // namespace jag::math
