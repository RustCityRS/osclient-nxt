// libs/math/vector/Vector3.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.game.runetek5

namespace jag::math {
    template <typename...> // 9 instantiations, e.g. <double>, <float>, <int>
    class Vector3T {
    public:
        Vector3T(float, float, float);
        Vector3T(int, int, int);
        Vector3T();
        operator=(Vector3T<float> const&);
        Vector3T<float>* Set(float, float, float);
        Vector3T<int>(Vector3T<int> const&);
        Vector3T(short, short, short);
        Vector3T<short>* operator=(Vector3T<short> const&);
        Vector3T<int>* operator*=(int);
        operator/=(int);
        bool IsNormal(float) const;
        Vector3T<int>* operator=(Vector3T<int> const&);
        void Serialise<oldscape::PacketJ<Array<unsigned char, eastl::allocator>>>(
            oldscape::PacketJ<Array<unsigned char, eastl::allocator>>&, bool) const;
        Vector3T<float>* SetToZero();
        void Negate();
        void Rotate(QuaternionT<float> const&);
        Vector3T<float>* operator*=(QuaternionT<float> const&);
        void Interpolate(Vector3T<float> const&, float);
        bool IsUniform() const;
        Vector3T(PacketT<Array<unsigned char, eastl::allocator>>&, bool);
        void operator*=(Matrix43T<float> const&);
        Vector4T<signed char>* y();
        Vector3T<signed char>* z();
        Vector3T<int>* operator+=(Vector3T<int> const&);
        Vector3T<float>* NormalizeSafe();
        int Length() const;
        Vector3T<signed char>(Vector3T<signed char> const&);
        Vector3T<float>(Vector3T<float> const&);
        Vector3T(int);
        Vector3T<unsigned char>* operator=(Vector3T<signed char> const&);
        void LengthSq() const;
        int MaxElement() const;
        Vector3T<unsigned int>* operator[](unsigned int) const;
        Vector3T<float>* operator-=(Vector3T<float> const&);
        Vector3T(PacketT<Array<unsigned char, BucketAllocatorEASTL>>&, bool);
        Vector3T<short>* operator[](unsigned int);
        Vector3T<int>* operator[](unsigned int);
        Vector3T<int>* operator[](unsigned int) const;
        Vector3T<short>* operator[](unsigned int) const;
        Vector3T<double>* operator[](unsigned int) const;
        Vector3T<double>* operator[](unsigned int);
        Vector3T<double>* operator+=(Vector3T<double> const&);
        Vector3T<double>* operator/=(double);
        Vector3T<double>* Set(Vector3T<double> const&);
        Vector3T<double>* SetToZero();
        Vector3T<double>* operator*=(QuaternionT<double> const&);
        Vector3T<double>* operator-=(Vector3T<double> const&);
        Vector3T<short>* operator+=(Vector3T<short> const&);
        Vector3T<short>* Set(unsigned short, unsigned short, unsigned short);
        Vector3T<unsigned char>* Set(unsigned char, unsigned char, unsigned char);
        Vector3T<signed char>* operator[](unsigned int) const;
        Vector3T<unsigned short>* operator[](unsigned int) const;
        Vector3T<unsigned char>* operator[](unsigned int) const;
        Vector3T(signed char, signed char, signed char);
        Vector3T(double, double, double);
        Vector3T<double>* operator=(Vector3T<double> const&);
        void operator*=(Matrix44T<float> const&);
        Vector3T<double>* Normalize();
        double InvLength() const;
        Vector3T<double>* operator*=(double);
        double Length() const;
        Vector3T<float>* SetToOne();
        ulong hash() const;
        void Length() const;
        Vector3T(float);
        Vector3T<float>* operator[](unsigned int) const;
        Vector3T<float>* Set(Vector3T<float> const&);
        Vector3T<float>* operator+=(Vector3T<float> const&);
        Vector3T<float>* operator*=(Vector3T<float> const&);
        bool SloppyCompare(Vector3T<float> const&, float) const;
        Vector3T<float>* Normalize();
        Vector3T<float>* operator*=(float);
        float MaxElement() const;
        Vector3T<float>* operator*=(Matrix33T<float> const&);
        float MinElement() const;
        float InvLength() const;
        Vector3T<float>* operator/=(float);
        Vector3T<float>* operator[](unsigned int);
        static ColourHSL /* 16 bytes */ ONE;                                 // = ColourHSL(1.0, 1.0, 1.0)
        static oldscape::rs2lib::worldmap::LocationData /* 12 bytes */ ZERO; // = LocationData(0, 0, 0)
        static ColourHSL /* 16 bytes */ LOOK;                                // = ColourHSL(0.0, 0.0, 1.0)
        static Vector3T<double> /* 32 bytes */ ZERO;                         // = Vector3T<double>(0.0, 0.0, 0.0)
        static ColourHSL /* 16 bytes */ ZERO;                                // = ColourHSL(0.0, 0.0, 0.0)
        static ColourHSL /* 16 bytes */ RIGHT;                               // = ColourHSL(1.0, 0.0, 0.0)
        static Vector3T<double> /* 32 bytes */ RIGHT;                        // = Vector3T<double>(1.0, 0.0, 0.0)
        static Vector3T<double> /* 32 bytes */ LOOK;                         // = Vector3T<double>(0.0, 0.0, 1.0)
        static Vector3T<double> /* 32 bytes */ UP;                           // = Vector3T<double>(0.0, 1.0, 0.0)
        static ColourHSL /* 16 bytes */ UP;                                  // = ColourHSL(0.0, 1.0, 0.0)
    };

    // 0x100f37c40, 16 bytes, __data; set at startup by ___cxx_global_var_init.240
    ColourHSL Vector3T<float>::ONE = ColourHSL(1.0, 1.0, 1.0);

    // 0x100f37c78, 12 bytes, __data; set at startup by ___cxx_global_var_init.162
    oldscape::rs2lib::worldmap::LocationData Vector3T<int>::ZERO = LocationData(0, 0, 0);

    // 0x100f38070, 16 bytes, __data; set at startup by ___cxx_global_var_init.152
    ColourHSL Vector3T<float>::LOOK = ColourHSL(0.0, 0.0, 1.0);

    // 0x100f38530, 32 bytes, __data; set at startup by ___cxx_global_var_init.103
    Vector3T<double> Vector3T<double>::ZERO = Vector3T<double>(0.0, 0.0, 0.0);

    // 0x100f3dcb0, 16 bytes, __data; set at startup by ___cxx_global_var_init.219
    ColourHSL Vector3T<float>::ZERO = ColourHSL(0.0, 0.0, 0.0);

    // 0x100f3dcd0, 16 bytes, __data; set at startup by ___cxx_global_var_init.374
    ColourHSL Vector3T<float>::RIGHT = ColourHSL(1.0, 0.0, 0.0);

    // 0x100f3dea0, 32 bytes, __data; set at startup by ___cxx_global_var_init.66
    Vector3T<double> Vector3T<double>::RIGHT = Vector3T<double>(1.0, 0.0, 0.0);

    // 0x100f3dec0, 32 bytes, __data; set at startup by ___cxx_global_var_init.64
    Vector3T<double> Vector3T<double>::LOOK = Vector3T<double>(0.0, 0.0, 1.0);

    // 0x100f44150, 32 bytes, __data; set at startup by ___cxx_global_var_init.65
    Vector3T<double> Vector3T<double>::UP = Vector3T<double>(0.0, 1.0, 0.0);

    // 0x100f4df50, 16 bytes, __data; set at startup by ___cxx_global_var_init.153
    ColourHSL Vector3T<float>::UP = ColourHSL(0.0, 1.0, 0.0);

    // 0x1000099f0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // Vector3T<float>::Vector3T(float, float, float): jumps straight to the base-object constructor

    // 0x1000099f0: the linker folded this into Vector3T<float>::Vector3T(float, float, float), which has identical code
    ColourHSL::ColourHSL(float, float, float);

    // 0x100009d90, 32 bytes, base-object constructor, inline, placed by class header (inline)
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // Vector3T<float>::Vector3T(float, float, float)
    /* ColourHSL::ColourHSL(float, float, float) */

    void ColourHSL::ColourHSL(float param_1, float param_2, float param_3) {
        field_0 = param_1;
        field_4 = param_2;
        field_8 = param_3;
    }

    // 0x10000bec0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.152
    void ___cxx_global_var_init_152() {
        undefined* puVar1;

        puVar1 = PTR_LOOK_100ee47d8;
        if (*PTR_LOOK_100ee47d8 == '\0') {
            new (PTR_LOOK_100ee66e0) ColourHSL(0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x10000bf00, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.153
    void ___cxx_global_var_init_153() {
        undefined* puVar1;

        puVar1 = PTR_UP_100ee47c8;
        if (*PTR_UP_100ee47c8 == '\0') {
            new (PTR_UP_100ee66d0) ColourHSL(0.0, 1.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x10005a170, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.219
    void ___cxx_global_var_init_219() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee47e0;
        if (*PTR_ZERO_100ee47e0 == '\0') {
            new (PTR_ZERO_100ee66e8) ColourHSL(0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1000b3a90, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.374
    void ___cxx_global_var_init_374() {
        undefined* puVar1;

        puVar1 = PTR_RIGHT_100ee47e8;
        if (*PTR_RIGHT_100ee47e8 == '\0') {
            new (PTR_RIGHT_100ee66f0) ColourHSL(1.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x1001ccc70, 32 bytes, inline, placed by class header (inline)
    // Vector3T<int>::operator*=(int)
    /* Vector3T<int>::TEMPNAMEPLACEHOLDERVALUE(int) */

    Vector3T<int>* Vector3T<int>::operator*=(int param_1) {
        *(int*)this = *(int*)this * param_1;
        *(int*)(this + 4) = *(int*)(this + 4) * param_1;
        *(int*)(this + 8) = param_1 * *(int*)(this + 8);
        return this;
    }

    // 0x1001ccc90, 48 bytes, inline, placed by class header (inline)
    // Vector3T<int>::operator/=(int)
    /* Vector3T<int>::TEMPNAMEPLACEHOLDERVALUE(int) */

    undefined1[16] Vector3T<int>::operator/=(int param_1) {
        undefined1 auVar1[16];

        *(int*)this = *(int*)this / param_1;
        *(int*)(this + 4) = *(int*)(this + 4) / param_1;
        auVar1._8_8_ = (long)*(int*)(this + 8) % (long)param_1 & 4294967295;
        *(int*)(this + 8) = *(int*)(this + 8) / param_1;
        auVar1._0_8_ = this;
        return auVar1;
    }

    // 0x1001dc6f0, 32 bytes, inline, placed by class header (inline)
    // Vector3T<int>::operator=(Vector3T<int> const&)
    /* Vector3T<int>::TEMPNAMEPLACEHOLDERVALUE(Vector3T<int> const&) */

    Vector3T<int>* Vector3T<int>::operator=(Vector3T* param_1) {
        *(undefined4*)this = *(undefined4*)param_1;
        *(undefined4*)(this + 4) = *(undefined4*)(param_1 + 4);
        *(undefined4*)(this + 8) = *(undefined4*)(param_1 + 8);
        return this;
    }

    // 0x1002e36f0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // Vector3T<float>::Vector3T(PacketT<Array<unsigned char, eastl::allocator> >&, bool): jumps straight to the base-object constructor

    // 0x1002e3700, 112 bytes, base-object constructor, inline, placed by class header (inline)
    // Vector3T<float>::Vector3T(PacketT<Array<unsigned char, eastl::allocator> >&, bool)
    void Vector3T<float>::Vector3T(PacketT* param_1, bool param_2) {
        undefined3 in_register_00000011;
        float fVar1;

        if (CONCAT31(in_register_00000011, param_2) == 0) {
            fVar1 = PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gT<float>(
                (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)param_1);
            *(float*)this = fVar1;
            fVar1 = PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gT<float>(
                (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)param_1);
            *(float*)(this + 4) = fVar1;
            fVar1 = PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gT<float>(
                (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)param_1);
        } else {
            fVar1 = PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gTPE<float>(
                (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)param_1);
            *(float*)this = fVar1;
            fVar1 = PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gTPE<float>(
                (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)param_1);
            *(float*)(this + 4) = fVar1;
            fVar1 = PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gTPE<float>(
                (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)param_1);
        }
        *(float*)(this + 8) = fVar1;
    }

    // 0x1002ecd30, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.240
    void ___cxx_global_var_init_240() {
        undefined* puVar1;

        puVar1 = PTR_ONE_100ee47d0;
        if (*PTR_ONE_100ee47d0 == '\0') {
            new (PTR_ONE_100ee66d8) ColourHSL(1.0, 1.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x1002f2dd0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // Vector3T<signed char>::Vector3T(): jumps straight to the base-object constructor

    // 0x1002f35b0, 16 bytes, inline, placed by class header (inline)
    // Vector3T<signed char>::y()
    /* Vector4T<signed char>::y() */

    Vector4T<signed char>* Vector4T<signed char>::y() {
        return this + 1;
    }

    // 0x1002f35c0, 16 bytes, inline, placed by class header (inline)
    // Vector3T<signed char>::z()
    /* Vector3T<signed char>::z() const */

    Vector3T<signed char>* Vector3T<signed char>::z() {
        return this + 2;
    }

    // 0x100313f30, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // Vector3T<long long>::Vector3T<int>(Vector3T<int> const&): jumps straight to the base-object constructor

    // 0x10033e840, 48 bytes, placed by the data it initialises
    // ___cxx_global_var_init.162
    void ___cxx_global_var_init_162() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee47f0;
        if (*PTR_ZERO_100ee47f0 == '\0') {
            new (PTR_ZERO_100ee66f8) oldscape::rs2lib::worldmap::LocationData(0, 0, 0);
            *puVar1 = 1;
        }
    }

    // 0x10036f450, 32 bytes, inline, placed by class header (inline)
    // Vector3T<int>::Length() const
    int Vector3T<int>::Length() {
        int iVar1;
        double dVar2;

        iVar1 = LengthSq(this);
        dVar2 = (double)sqrt<int>(iVar1);
        return (int)dVar2;
    }

    // 0x10036fa90, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // Vector3T<float>::Vector3T<signed char>(Vector3T<signed char> const&): jumps straight to the base-object constructor

    // 0x10036faa0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // Vector3T<int>::Vector3T<float>(Vector3T<float> const&): jumps straight to the base-object constructor

    // 0x1003701f0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // Vector3T<int>::Vector3T(int): jumps straight to the base-object constructor

    // 0x100370200, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // Vector3T<signed char>::Vector3T<int>(Vector3T<int> const&): jumps straight to the base-object constructor

    // 0x100370210, 32 bytes, inline, placed by class header (inline)
    // Vector3T<signed char>::operator=(Vector3T<signed char> const&)
    /* Vector3T<unsigned char>::TEMPNAMEPLACEHOLDERVALUE(Vector3T<unsigned char>
   const&) */

    Vector3T<unsigned char>* Vector3T<unsigned char>::operator=(Vector3T* param_1) {
        *this = (Vector3T<unsigned char>)*param_1;
        *(Vector3T*)(this + 1) = param_1[1];
        *(Vector3T*)(this + 2) = param_1[2];
        return this;
    }

    // 0x1003702a0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // Vector3T<int>::Vector3T<signed char>(Vector3T<signed char> const&): jumps straight to the base-object constructor

    // 0x1003702b0, 16 bytes, inline, placed by class header (inline)
    // Vector3T<int>::LengthSq() const
    void Vector3T<int>::LengthSq() {
        Vector3Dot<int>((Vector3T*)this, (Vector3T*)this);
    }

    // 0x100370360, 80 bytes, inline, placed by class header (inline)
    // Vector3T<int>::MaxElement() const
    int Vector3T<int>::MaxElement() {
        int* piVar1;
        vector* pvVar2;
        int* piVar3;
        type* in_RSI;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* in_RDI;

        piVar1 =
            (int*)eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                             eastl::allocator, 0>::second(in_RDI);
        pvVar2 = in_RDI->SSOBeginPtr(in_RSI);
        piVar3 = (int*)in_RDI->y();
        piVar3 = std::max<int>((int*)pvVar2, piVar3);
        piVar1 = std::max<int>(piVar1, piVar3);
        return *piVar1;
    }

    // 0x1003de370, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // Vector3T<unsigned int>::Vector3T<float>(Vector3T<float> const&): jumps straight to the base-object constructor

    // 0x1003de380, 64 bytes, inline, placed by class header (inline)
    // Vector3T<unsigned int>::operator[](unsigned int) const
    Vector3T<unsigned int>* Vector3T<unsigned int>::operator[](uint param_1) {
        if (2 < param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("index < N",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/colour/../vector/"
                      "Vector3.inl",
                      203, (char*)0);
        }
        return this + (ulong)param_1 * 4;
    }

    // 0x10040bc10, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.103
    void ___cxx_global_var_init_103() {
        undefined* puVar1;

        puVar1 = PTR_ZERO_100ee47b8;
        if (*PTR_ZERO_100ee47b8 == '\0') {
            new (PTR_ZERO_100ee66c0) Vector3T<double>(0.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100507070, 64 bytes, inline, placed by class header (inline)
    // Vector3T<short>::operator[](unsigned int)
    Vector3T<short>* Vector3T<short>::operator[](uint param_1) {
        if (2 < param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("index < N",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/colour/../vector/"
                      "Vector3.inl",
                      196, (char*)0);
        }
        return this + (ulong)param_1 * 2;
    }

    // 0x1005070b0, 64 bytes, inline, placed by class header (inline)
    // Vector3T<int>::operator[](unsigned int)
    Vector3T<int>* Vector3T<int>::operator[](uint param_1) {
        if (2 < param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("index < N",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/colour/../vector/"
                      "Vector3.inl",
                      196, (char*)0);
        }
        return this + (ulong)param_1 * 4;
    }

    // 0x1005414d0, 96 bytes, base-object constructor, inline, placed by class header (inline)
    // Vector3T<int>::Vector3T(PacketT<Array<unsigned char, eastl::allocator> >&, bool)
    void Vector3T<int>::Vector3T(PacketT* param_1, bool param_2) {
        int iVar1;
        undefined3 in_register_00000011;

        if (CONCAT31(in_register_00000011, param_2) == 0) {
            iVar1 = PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gT<int>(
                (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)param_1);
            *(int*)this = iVar1;
            iVar1 = PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gT<int>(
                (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)param_1);
            *(int*)(this + 4) = iVar1;
            iVar1 = PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gT<int>(
                (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)param_1);
        } else {
            iVar1 = PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gTPE<int>(
                (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)param_1);
            *(int*)this = iVar1;
            iVar1 = PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gTPE<int>(
                (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)param_1);
            *(int*)(this + 4) = iVar1;
            iVar1 = PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gTPE<int>(
                (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)param_1);
        }
        *(int*)(this + 8) = iVar1;
    }

    // 0x100606ad0, 64 bytes, inline, placed by class header (inline)
    // Vector3T<double>::operator[](unsigned int) const
    Vector3T<double>* Vector3T<double>::operator[](uint param_1) {
        if (2 < param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("index < N",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/colour/../vector/"
                      "Vector3.inl",
                      203, (char*)0);
        }
        return this + (ulong)param_1 * 8;
    }

    // 0x100606b10, 64 bytes, inline, placed by class header (inline)
    // Vector3T<double>::operator[](unsigned int)
    Vector3T<double>* Vector3T<double>::operator[](uint param_1) {
        if (2 < param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("index < N",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/colour/../vector/"
                      "Vector3.inl",
                      196, (char*)0);
        }
        return this + (ulong)param_1 * 8;
    }

    // 0x1006075f0, 64 bytes, inline, placed by class header (inline)
    // Vector3T<double>::operator+=(Vector3T<double> const&)
    /* Vector3T<double>::TEMPNAMEPLACEHOLDERVALUE(Vector3T<double> const&) */

    Vector3T<double>* Vector3T<double>::operator+=(Vector3T* param_1) {
        *(double*)this = *(double*)this + *(double*)param_1;
        *(double*)(this + 8) = *(double*)(this + 8) + *(double*)(param_1 + 8);
        *(double*)(this + 16) = *(double*)(this + 16) + *(double*)(param_1 + 16);
        return this;
    }

    // 0x10061c220, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.64
    void ___cxx_global_var_init_64() {
        undefined* puVar1;

        puVar1 = PTR_LOOK_100ee47b0;
        if (*PTR_LOOK_100ee47b0 == '\0') {
            new (PTR_LOOK_100ee66b8) Vector3T<double>(0.0, 0.0, 1.0);
            *puVar1 = 1;
        }
    }

    // 0x10061c260, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.65
    void ___cxx_global_var_init_65() {
        undefined* puVar1;

        puVar1 = PTR_UP_100ee47a8;
        if (*PTR_UP_100ee47a8 == '\0') {
            new (PTR_UP_100ee66b0) Vector3T<double>(0.0, 1.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x10061c2a0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.66
    void ___cxx_global_var_init_66() {
        undefined* puVar1;

        puVar1 = PTR_RIGHT_100ee47c0;
        if (*PTR_RIGHT_100ee47c0 == '\0') {
            new (PTR_RIGHT_100ee66c8) Vector3T<double>(1.0, 0.0, 0.0);
            *puVar1 = 1;
        }
    }

    // 0x100620060, 64 bytes, inline, placed by class header (inline)
    // Vector3T<double>::operator/=(double)
    /* Vector3T<double>::TEMPNAMEPLACEHOLDERVALUE(double) */

    Vector3T<double>* Vector3T<double>::operator/=(double param_1) {
        double dVar1;

        dVar1 = 1.0 / param_1;
        *(double*)this = *(double*)this * dVar1;
        *(double*)(this + 8) = *(double*)(this + 8) * dVar1;
        *(double*)(this + 16) = dVar1 * *(double*)(this + 16);
        return this;
    }

    // 0x100623d30, 32 bytes, inline, placed by class header (inline)
    // Vector3T<double>::Set(Vector3T<double> const&)
    Vector3T<double>* Vector3T<double>::Set(Vector3T* param_1) {
        operator=(this, param_1);
        return this;
    }

    // 0x10064b690, 32 bytes, inline, placed by class header (inline)
    // Vector3T<short>::operator+=(Vector3T<short> const&)
    /* Vector3T<short>::TEMPNAMEPLACEHOLDERVALUE(Vector3T<short> const&) */

    Vector3T<short>* Vector3T<short>::operator+=(Vector3T* param_1) {
        *(short*)this = *(short*)this + *(short*)param_1;
        *(short*)(this + 2) = *(short*)(this + 2) + *(short*)(param_1 + 2);
        *(short*)(this + 4) = *(short*)(this + 4) + *(short*)(param_1 + 4);
        return this;
    }

    // 0x1007b46c0, 32 bytes, inline, placed by class header (inline)
    // Vector3T<unsigned short>::Set(unsigned short, unsigned short, unsigned short)
    /* Vector3T<short>::Set(short, short, short) */

    Vector3T<short>* Vector3T<short>::Set(short param_1, short param_2, short param_3) {
        *(short*)this = param_1;
        *(short*)(this + 2) = param_2;
        *(short*)(this + 4) = param_3;
        return this;
    }

    // 0x1007b4740, 32 bytes, inline, placed by class header (inline)
    // Vector3T<unsigned char>::Set(unsigned char, unsigned char, unsigned char)
    Vector3T<unsigned char>* Vector3T<unsigned char>::Set(uchar param_1, uchar param_2, uchar param_3) {
        *this = (Vector3T<unsigned char>)param_1;
        this[1] = (Vector3T<unsigned char>)param_2;
        this[2] = (Vector3T<unsigned char>)param_3;
        return this;
    }

    // 0x100979770, 32 bytes, inline, placed by class header (inline)
    // Vector3T<float>::SetToOne()
    Vector3T<float>* Vector3T<float>::SetToOne() {
        *(undefined8*)this = 4575657222473777152;
        *(undefined4*)(this + 8) = 1065353216;
        return this;
    }

    // 0x1009dd730, 80 bytes, inline, placed by class header (inline)
    // Vector3T<float>::hash() const
    ulong Vector3T<float>::hash() {
        ulong local_20;

        local_20 = 0;
        hash_combine<float>(&local_20, (float*)this);
        hash_combine<float>(&local_20, (float*)(this + 4));
        hash_combine<float>(&local_20, (float*)(this + 8));
        return local_20;
    }

    // 0x100c610c0, 16 bytes, inline, placed by class header (inline)
    // Vector3T<float>::LengthSq() const
    void Vector3T<float>::LengthSq() {
        Vector3Dot<float>((Vector3T*)this, (Vector3T*)this);
    }

    // 0x100c612e0, 16 bytes, inline, placed by class header (inline)
    // Vector3T<float>::Length() const
    void Vector3T<float>::Length() {
        float fVar1;

        fVar1 = (float)LengthSq(this);
        ::sqrt(fVar1);
    }

    // 0x100c6ae90, 32 bytes, inline, placed by class header (inline)
    // Vector3T<float>::Normalize()
    Vector3T<float>* Vector3T<float>::Normalize() {
        float fVar1;

        fVar1 = (float)InvLength(this);
        operator*=(this, fVar1);
        return this;
    }

    // 0x100c6b920, 48 bytes, inline, placed by class header (inline)
    // Vector3T<float>::operator*=(float)
    /* Vector3T<float>::TEMPNAMEPLACEHOLDERVALUE(float) */

    Vector3T<float>* Vector3T<float>::operator*=(float param_1) {
        *(float*)this = *(float*)this * param_1;
        *(float*)(this + 4) = *(float*)(this + 4) * param_1;
        *(float*)(this + 8) = param_1 * *(float*)(this + 8);
        return this;
    }

    // 0x100c6bb00, 80 bytes, inline, placed by class header (inline)
    // Vector3T<float>::MaxElement() const
    float Vector3T<float>::MaxElement() {
        float* pfVar1;
        vector* pvVar2;
        float* pfVar3;
        type* in_RSI;

        pfVar1 = (float*)second();
        pvVar2 = SSOBeginPtr(in_RSI);
        pfVar3 = (float*)y();
        pfVar3 = std::max<float>((float*)pvVar2, pfVar3);
        pfVar1 = std::max<float>(pfVar1, pfVar3);
        return *pfVar1;
    }

    // 0x100c6be60, 512 bytes, inline, placed by class header (inline)
    // Vector3T<float>::operator*=(Matrix33T<float> const&)
    /* Vector3T<float>::TEMPNAMEPLACEHOLDERVALUE(Matrix33T<float> const&) */

    Vector3T<float>* Vector3T<float>::operator*=(Matrix33T* param_1) {
        float fVar1;
        float fVar2;
        float fVar3;
        float fVar4;
        float fVar5;
        float fVar6;
        float fVar7;
        float fVar8;
        float fVar9;
        float fVar10;
        float fVar11;
        float fVar12;
        float fVar13;
        float fVar14;
        float fVar15;
        float fVar16;
        float fVar17;
        Vector3T<float>* pVVar18;
        float* pfVar19;

        fVar1 = *(float*)this;
        pVVar18 = (Vector3T<float>*)Matrix33T<float>::operator[]((Matrix33T<float>*)param_1, 0);
        pfVar19 = (float*)operator[](pVVar18, 0);
        fVar2 = *pfVar19;
        fVar3 = *(float*)(this + 4);
        pVVar18 = (Vector3T<float>*)Matrix33T<float>::operator[]((Matrix33T<float>*)param_1, 1);
        pfVar19 = (float*)operator[](pVVar18, 0);
        fVar4 = *pfVar19;
        fVar5 = *(float*)(this + 8);
        pVVar18 = (Vector3T<float>*)Matrix33T<float>::operator[]((Matrix33T<float>*)param_1, 2);
        pfVar19 = (float*)operator[](pVVar18, 0);
        fVar6 = *pfVar19;
        fVar7 = *(float*)this;
        pVVar18 = (Vector3T<float>*)Matrix33T<float>::operator[]((Matrix33T<float>*)param_1, 0);
        pfVar19 = (float*)operator[](pVVar18, 1);
        fVar8 = *pfVar19;
        fVar9 = *(float*)(this + 4);
        pVVar18 = (Vector3T<float>*)Matrix33T<float>::operator[]((Matrix33T<float>*)param_1, 1);
        pfVar19 = (float*)operator[](pVVar18, 1);
        fVar10 = *pfVar19;
        fVar11 = *(float*)(this + 8);
        pVVar18 = (Vector3T<float>*)Matrix33T<float>::operator[]((Matrix33T<float>*)param_1, 2);
        pfVar19 = (float*)operator[](pVVar18, 1);
        fVar12 = *pfVar19;
        fVar13 = *(float*)this;
        pVVar18 = (Vector3T<float>*)Matrix33T<float>::operator[]((Matrix33T<float>*)param_1, 0);
        pfVar19 = (float*)operator[](pVVar18, 2);
        fVar14 = *pfVar19;
        fVar15 = *(float*)(this + 4);
        pVVar18 = (Vector3T<float>*)Matrix33T<float>::operator[]((Matrix33T<float>*)param_1, 1);
        pfVar19 = (float*)operator[](pVVar18, 2);
        fVar16 = *pfVar19;
        fVar17 = *(float*)(this + 8);
        pVVar18 = (Vector3T<float>*)Matrix33T<float>::operator[]((Matrix33T<float>*)param_1, 2);
        pfVar19 = (float*)operator[](pVVar18, 2);
        *(float*)(this + 8) = fVar17 * *pfVar19 + fVar15 * fVar16 + fVar13 * fVar14;
        *(float*)this = fVar5 * fVar6 + fVar3 * fVar4 + fVar1 * fVar2;
        *(float*)(this + 4) = fVar11 * fVar12 + fVar9 * fVar10 + fVar7 * fVar8;
        return this;
    }

    // 0x100c6d9c0, 80 bytes, inline, placed by class header (inline)
    // Vector3T<float>::MinElement() const
    float Vector3T<float>::MinElement() {
        float* pfVar1;
        vector* pvVar2;
        float* pfVar3;
        type* in_RSI;

        pfVar1 = (float*)second();
        pvVar2 = SSOBeginPtr(in_RSI);
        pfVar3 = (float*)y();
        pfVar3 = std::min<float>((float*)pvVar2, pfVar3);
        pfVar1 = std::min<float>(pfVar1, pfVar3);
        return *pfVar1;
    }

    // 0x100c6e4f0, 32 bytes, base-object constructor, inline, placed by class header (inline)
    // Vector3T<float>::Vector3T(float)
    void Vector3T<float>::Vector3T(float param_1) {
        *(float*)this = param_1;
        *(float*)(this + 4) = param_1;
        *(float*)(this + 8) = param_1;
    }

    // 0x100c6e510, 48 bytes, inline, placed by class header (inline)
    // Vector3T<float>::InvLength() const
    float Vector3T<float>::InvLength() {
        float fVar1;
        float fVar2;

        fVar1 = (float)Length(this);
        fVar2 = 0.0;
        if (fVar1 != 0.0) {
            fVar2 = 1.0 / fVar1;
        }
        return fVar2;
    }

    // 0x100c6efb0, 64 bytes, inline, placed by class header (inline)
    // Vector3T<float>::operator/=(float)
    /* Vector3T<float>::TEMPNAMEPLACEHOLDERVALUE(float) */

    Vector3T<float>* Vector3T<float>::operator/=(float param_1) {
        float fVar1;

        fVar1 = 1.0 / param_1;
        *(float*)this = *(float*)this * fVar1;
        *(float*)(this + 4) = *(float*)(this + 4) * fVar1;
        *(float*)(this + 8) = fVar1 * *(float*)(this + 8);
        return this;
    }

    // 0x100cba770, 64 bytes, inline, placed by class header (inline)
    // Vector3T<float>::operator[](unsigned int)
    Vector3T<float>* Vector3T<float>::operator[](uint param_1) {
        if (2 < param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("index < N",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/colour/../vector/"
                      "Vector3.inl",
                      196, (char*)0);
        }
        return this + (ulong)param_1 * 4;
    }

} // namespace jag::math

namespace jag {
    // 0x100009a60, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // Args::~Args(): jumps straight to the base-object destructor

    // 0x100009a70, 16 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // Args::~Args()
    /* oldscape::rs2lib::StringVector::~StringVector() */

    void oldscape::rs2lib::StringVector::~StringVector() {
        ~vector();
    }

} // namespace jag
