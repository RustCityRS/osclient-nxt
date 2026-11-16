// libs/game/runetek5/camera/spline/BSplineCubic.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class BSplineCubic {
    public:
        BSplineCubic();
        BSplineCubic* operator=(BSplineCubic&&);
        ~BSplineCubic();
        void GetSegmentCount() const;
        GetWorldPositionFromParameter(double) const;
        void GetWorldRollFromDistance(double) const;
        double GetWorldRollFromParameter(double) const;
        BSplineCubic(PacketT<Array<unsigned char, BucketAllocatorEASTL>>&);
        double GetParameterFromWorldDistance(double) const;
        BSplineCubic(math::Vector3T<float> const&, math::Vector3T<float> const&, math::Vector3T<float> const&,
                     math::Vector3T<float> const&, double, double);
        BSplineCubic(math::Vector3T<double> const&, math::Vector3T<double> const&, math::Vector3T<double> const&,
                     math::Vector3T<double> const&, double, double);
        BSplineCubic(std::array<math::Vector3T<double>, 4ul> const&, double, double);
        void AddSegment(math::Vector3T<double> const&, math::Vector3T<double> const&, double);
        void SetControlPoint(int, bool, math::Vector3T<double> const&);
        void GetControlPoint(int, bool) const;
        double GetWorldLength() const;
        double GetPartialWorldLength(int) const;
        GetWorldPosition(double) const;
        double GetWorldDistanceFromParameter(double) const;
        GetTangent(double) const;
        GetSubSpline(int, int) const;
        BSplineCubic(BSplineCubic const&);
        BSplineCubic(BSplineCubic&&);
        void DumpSpline(char const*) const;
        void Decode<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>(
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>&);

        // data members, from how the methods use this: 40 bytes
        ulong field_0;                // offset 0
        BSplineCubicSegment* field_8; // offset 8
        char _unknown_16[24];
    };

    // 0x100607190, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // BSplineCubic::BSplineCubic(): jumps straight to the base-object constructor

    // 0x1006071b0, 48 bytes, inline, placed by class name and debug map
    // BSplineCubic::operator=(BSplineCubic&&)
    /* BSplineCubic::TEMPNAMEPLACEHOLDERVALUE(BSplineCubic&&) */

    BSplineCubic* BSplineCubic::operator=(BSplineCubic* param_1) {
        eastl::vector<BSplineCubicSegment, eastl::allocator>::operator=(
            (vector<BSplineCubicSegment, eastl::allocator>*)this, (vector*)param_1);
        eastl::vector<double, eastl::allocator>::operator=((vector<double, eastl::allocator>*)&field_32,
                                                           (vector*)&param_1->field_32);
        return this;
    }

    // 0x1006071e0, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // BSplineCubic::~BSplineCubic(): jumps straight to the base-object destructor

    // 0x100607480, 16 bytes, inline, placed by class name and debug map
    // BSplineCubic::GetSegmentCount() const
    void BSplineCubic::GetSegmentCount() {
        size();
    }

    // 0x10060ec10, 48 bytes, base-object constructor, inline, placed by class name
    // BSplineCubic::BSplineCubic()
    void BSplineCubic::BSplineCubic() {
        new (this) eastl::vector<BSplineCubicSegment, eastl::allocator>();
        new (&field_32) eastl::vector<double, eastl::allocator>();
    }

    // 0x10060ef80, 48 bytes, base-object destructor, inline, placed by class name
    // BSplineCubic::~BSplineCubic()
    void BSplineCubic::~BSplineCubic() {
        (&field_32)->~vector();
        ~vector();
    }

    // 0x100615ac0, 32 bytes, inline, placed by class name and debug map
    // BSplineCubic::GetWorldRollFromDistance(double) const
    void BSplineCubic::GetWorldRollFromDistance(double param_1) {
        double dVar1;

        dVar1 = (double)GetParameterFromWorldDistance(this, param_1);
        GetWorldRollFromParameter(this, dVar1);
    }

    // 0x100615f20, 16 bytes, complete-object constructor, inline, placed by class name
    // BSplineCubic::BSplineCubic(PacketT<Array<unsigned char, BucketAllocatorEASTL> >&): jumps straight to the base-object constructor

    // 0x100618db0, 16 bytes, complete-object constructor, inline, placed by class name
    // BSplineCubic::BSplineCubic(BSplineCubic const&): jumps straight to the base-object constructor

    // 0x100618dc0, 16 bytes, complete-object constructor, inline, placed by class name
    // BSplineCubic::BSplineCubic(BSplineCubic&&): jumps straight to the base-object constructor

    // 0x100619cf0, 96 bytes, base-object constructor, inline, placed by class name
    // BSplineCubic::BSplineCubic(PacketT<Array<unsigned char, BucketAllocatorEASTL> >&)
    void BSplineCubic::BSplineCubic(PacketT* param_1) {
        new (this) eastl::vector<BSplineCubicSegment, eastl::allocator>();
        new (&field_32) eastl::vector<double, eastl::allocator>();
        Decode<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>(this, param_1);
    }

    // 0x100619d50, 480 bytes, inline, placed by class name
    // void BSplineCubic::Decode<PacketT<Array<unsigned char, BucketAllocatorEASTL> > >(PacketT<Array<unsigned char, BucketAllocatorEASTL> >&)
    void BSplineCubic::Decode<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>(PacketT* param_1) {
        int iVar1;
        float fVar2;
        Vector3T<float> local_d0[16];
        Vector3T<float> local_c0[16];
        Vector3T<float> local_b0[16];
        Vector3T<float> local_a0[16];
        Vector3T<float> local_90[16];
        Vector3T<float> local_80[16];
        undefined8 local_70[3];
        double local_50[3];
        ushort local_32;

        local_32 = param_1->gSmart1or2();
        math::Vector3T<float>::Vector3T(local_a0, param_1, false);
        math::Vector3T<float>::Vector3T(local_90, param_1, false);
        fVar2 = (float)param_1->gFloat();
        local_50[0] = (double)fVar2;
        (&field_32, local_50)->push_back();
        math::Vector3T<float>::Vector3T(local_d0, param_1, false);
        math::Vector3T<float>::Vector3T(local_c0, param_1, false);
        local_70[0] = math::operator-((Vector3T*)local_d0, (Vector3T*)local_c0);
        local_50[0] = (double)math::operator+((Vector3T*)local_70, (Vector3T*)local_d0);
        local_c0->SetXYZ(local_50);
        fVar2 = (float)param_1->gFloat();
        local_50[0] = (double)fVar2;
        (&field_32, local_50)->push_back();
        eastl::vector<BSplineCubicSegment, eastl::allocator>::emplace_back<
            math::Vector3T<float>&, math::Vector3T<float>&, math::Vector3T<float>&, math::Vector3T<float>&>(
            (vector<BSplineCubicSegment, eastl::allocator>*)this, (Vector3T*)local_a0, (Vector3T*)local_90,
            (Vector3T*)local_c0, (Vector3T*)local_d0);
        if (2 < local_32) {
            iVar1 = local_32 - 2;
            do {
                math::Vector3T<float>::Vector3T(local_80, param_1, false);
                math::Vector3T<float>::Vector3T(local_b0, param_1, false);
                local_70[0] = math::operator-((Vector3T*)local_80, (Vector3T*)local_b0);
                local_50[0] = (double)math::operator+((Vector3T*)local_70, (Vector3T*)local_80);
                local_b0->SetXYZ(local_50);
                math::Vector3T<double>::Vector3T<float>((Vector3T<double>*)local_50, (Vector3T*)local_80);
                math::Vector3T<double>::Vector3T<float>((Vector3T<double>*)local_70, (Vector3T*)local_b0);
                fVar2 = (float)param_1->gFloat();
                AddSegment((BSplineCubic*)this, (Vector3T*)local_50, (Vector3T*)local_70, (double)fVar2);
                iVar1 = iVar1 + -1;
            } while (iVar1 != 0);
        }
    }

    // 0x10061a490, 64 bytes, base-object constructor, inline, placed by class name
    // BSplineCubic::BSplineCubic(BSplineCubic const&)
    void BSplineCubic::BSplineCubic(BSplineCubic* param_1) {
        new (this) eastl::vector<BSplineCubicSegment, eastl::allocator>(param_1);
        new (&field_32, (vector*)&param_1->field_32) eastl::vector<double, eastl::allocator>();
    }

    // 0x10061a770, 48 bytes, base-object constructor, inline, placed by class name
    // BSplineCubic::BSplineCubic(BSplineCubic&&)
    void BSplineCubic::BSplineCubic(BSplineCubic* param_1) {
        new (this) eastl::vector<BSplineCubicSegment, eastl::allocator>(param_1);
        new (&field_32, (vector*)&param_1->field_32) eastl::vector<double, eastl::allocator>();
    }

} // namespace jag::game

namespace jag {
    // 0x1006072d0, 48 bytes, inline, placed by debug map only (low confidence)
    // bool ArrayValidPosition<std::array<game::BSplineCubic, 2ul>, int>(std::array<game::BSplineCubic, 2ul> const&, int const&)
    /* bool ArrayValidPosition<std::array<game::BSplineCubic, 2ul>,
   int>(std::array<game::BSplineCubic, 2ul> const&, int const&) */

    bool ArrayValidPosition<std::array<game::BSplineCubic, 2ul>, int>(array* param_1, int* param_2) {
        integral_constant local_18[8];

        return ArrayPositivePos<int>(param_2, local_18) && (uint)*param_2 < 2;
    }

} // namespace jag
