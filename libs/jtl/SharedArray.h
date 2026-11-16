// libs/jtl/SharedArray.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    template <
        typename...> // 4 instantiations, e.g. <Array<unsigned char, eastl::allocator> >, <signed char>, <std::unique_ptr<oldscape::rs2lib::worldmap::LocationData, std::default_delete<o
    class SharedArray {
    public:
        void operator[](unsigned long) const;
        SharedArray(SharedArray<unsigned int>&&);
        void operator[](unsigned long);
        SharedArray();
        ~SharedArray();
        bool empty() const;
        void ref_assign(SharedArray<signed char> const&);
        void data();
        void ref_assign(SharedArray<unsigned int> const&);
        SharedArray(unsigned long);
        operator=(SharedArray<std::unique_ptr<oldscape::rs2lib::worldmap::LocationData,
                                              std::default_delete<oldscape::rs2lib::worldmap::LocationData>>>&&);
        SharedArray<Array<unsigned char, eastl::allocator>>*
        operator=(SharedArray<Array<unsigned char, eastl::allocator>>&&);
        SharedArray<signed char>* operator=(SharedArray<signed char>&&);
        void clear();
        SharedArray<unsigned int>* operator=(SharedArray<unsigned int>&&);
    };

    // 0x10000cb60, 96 bytes, inline, placed by class name and debug map
    // SharedArray<unsigned int>::operator[](unsigned long) const
    void SharedArray<unsigned int>::operator[](ulong param_1) {
        if (*(ulong*)this <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("(index < m_Size)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/SharedArray.h", 310,
                      "Index of %d outside range 0 to %d", param_1, *(ulong*)this - 1);
        }
        shared_ptr<unsigned int[]>::operator[]((shared_ptr<unsigned int[]>*)(this + 8), param_1);
    }

    // 0x10002a410, 16 bytes, complete-object constructor, inline, placed by class name
    // SharedArray<unsigned int>::SharedArray(SharedArray<unsigned int>&&): jumps straight to the base-object constructor

    // 0x10002a420, 48 bytes, base-object constructor, inline, placed by class name
    // SharedArray<unsigned int>::SharedArray(SharedArray<unsigned int>&&)
    /* SharedArray<Array<unsigned char, eastl::allocator>
   >::SharedArray(SharedArray<Array<unsigned char, eastl::allocator> >&&) */

    void SharedArray<Array<unsigned char, eastl::allocator>>::SharedArray(
        SharedArray<Array<unsigned char, eastl::allocator>>* this, SharedArray* param_1) {
        *(undefined8*)this = *(undefined8*)param_1;
        new ((this + 8)) shared_ptr<Array<unsigned char, eastl::allocator>[]>((shared_ptr*)(param_1 + 8));
        *(undefined8*)param_1 = 0;
    }

    // 0x1000bf270, 96 bytes, inline, placed by class name
    // SharedArray<unsigned int>::operator[](unsigned long)
    void SharedArray<unsigned int>::operator[](ulong param_1) {
        if (*(ulong*)this <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("(index < m_Size)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/SharedArray.h", 299,
                      "Index of %d outside range 0 to %d", param_1, *(ulong*)this - 1);
        }
        shared_ptr<unsigned int[]>::operator[]((shared_ptr<unsigned int[]>*)(this + 8), param_1);
    }

    // 0x10012d2e0, 16 bytes, complete-object constructor, inline, placed by class name
    // SharedArray<Array<unsigned char, eastl::allocator> >::SharedArray(): jumps straight to the base-object constructor

    // 0x10012d300, 16 bytes, complete-object destructor, inline, placed by class name
    // SharedArray<Array<unsigned char, eastl::allocator> >::~SharedArray(): jumps straight to the base-object destructor

    // 0x10012d310, 32 bytes, base-object constructor, inline, placed by class name
    // SharedArray<Array<unsigned char, eastl::allocator> >::SharedArray()
    /* SharedArray<unsigned int>::SharedArray() */

    void SharedArray<unsigned int>::SharedArray() {
        *(undefined8*)this = 0;
        new ((this + 8)) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
    }

    // 0x10012d360, 16 bytes, base-object destructor, inline, placed by class name
    // SharedArray<Array<unsigned char, eastl::allocator> >::~SharedArray()
    /* SharedArray<unsigned int>::~SharedArray() */

    void SharedArray<unsigned int>::~SharedArray() {
        ((this + 8))->~shared_ptr();
    }

    // 0x1001ca480, 16 bytes, inline, placed by class name
    // SharedArray<signed char>::empty() const
    /* SharedArray<std::unique_ptr<oldscape::rs2lib::worldmap::LocationData,
   std::default_delete<oldscape::rs2lib::worldmap::LocationData> > >::empty() const */

    bool jag::SharedArray<std::unique_ptr<oldscape::rs2lib::worldmap::LocationData,
                                          std::default_delete<oldscape::rs2lib::worldmap::LocationData>>>::
        empty(SharedArray<std::unique_ptr<oldscape::rs2lib::worldmap::LocationData,
                                          std::default_delete<oldscape::rs2lib::worldmap::LocationData>>>* this) {
        return *(long*)this == 0;
    }

    // 0x1001ddf00, 32 bytes, inline, placed by class name
    // SharedArray<signed char>::ref_assign(SharedArray<signed char> const&)
    void SharedArray<signed char>::ref_assign(SharedArray* param_1) {
        *(undefined8*)this = *(undefined8*)param_1;
        shared_ptr<signed char[]>::operator=((shared_ptr<signed char[]>*)(this + 8), (shared_ptr*)(param_1 + 8));
    }

    // 0x1002034d0, 16 bytes, inline, placed by class name
    // SharedArray<unsigned int>::data()
    /* SharedArray<unsigned int>::data() const */

    void SharedArray<unsigned int>::data() {
        ((this + 8))->end();
    }

    // 0x10020b550, 32 bytes, inline, placed by class name
    // SharedArray<unsigned int>::ref_assign(SharedArray<unsigned int> const&)
    void SharedArray<unsigned int>::ref_assign(SharedArray* param_1) {
        *(undefined8*)this = *(undefined8*)param_1;
        shared_ptr<unsigned int[]>::operator=((shared_ptr<unsigned int[]>*)(this + 8), (shared_ptr*)(param_1 + 8));
    }

    // 0x10020f900, 16 bytes, complete-object constructor, inline, placed by class name
    // SharedArray<std::unique_ptr<oldscape::rs2lib::worldmap::LocationData, std::default_delete<oldscape::rs2lib::worldmap::LocationData> > >::SharedArray(unsigned long): jumps straight to the base-object constructor

    // 0x10020f9a0, 48 bytes, inline, placed by class name
    // SharedArray<std::unique_ptr<oldscape::rs2lib::worldmap::LocationData, std::default_delete<oldscape::rs2lib::worldmap::LocationData> > >::operator=(SharedArray<std::unique_ptr<oldscape::rs2lib::worldmap::LocationData, std::default_delete<oldscape::rs2lib::worldmap::LocationData> > >&&)
    /* SharedArray<std::unique_ptr<oldscape::rs2lib::worldmap::LocationData,
   std::default_delete<oldscape::rs2lib::worldmap::LocationData> >
   >::TEMPNAMEPLACEHOLDERVALUE(SharedArray<std::unique_ptr<oldscape::rs2lib::worldmap::LocationData,
   std::default_delete<oldscape::rs2lib::worldmap::LocationData> > >&&) */

    SharedArray<std::unique_ptr<oldscape::rs2lib::worldmap::LocationData,
                                std::default_delete<oldscape::rs2lib::worldmap::LocationData>>>*
    jag::SharedArray<std::unique_ptr<oldscape::rs2lib::worldmap::LocationData,
                                     std::default_delete<oldscape::rs2lib::worldmap::LocationData>>>::
    operator=(SharedArray<std::unique_ptr<oldscape::rs2lib::worldmap::LocationData,
                                          std::default_delete<oldscape::rs2lib::worldmap::LocationData>>>* this,
              SharedArray* param_1) {
        *(undefined8*)this = *(undefined8*)param_1;
        *(undefined8*)param_1 = 0;
        shared_ptr<std::unique_ptr<oldscape::rs2lib::worldmap::LocationData,
                                   std::default_delete<oldscape::rs2lib::worldmap::LocationData>>[]>::
        operator=(
            (shared_ptr<std::unique_ptr<oldscape::rs2lib::worldmap::LocationData,
                                        std::default_delete<oldscape::rs2lib::worldmap::LocationData>>[]>*)(this + 8),
            (shared_ptr*)(param_1 + 8));
        return this;
    }

    // 0x100217770, 16 bytes, complete-object constructor, inline, placed by class name
    // SharedArray<unsigned int>::SharedArray(unsigned long): jumps straight to the base-object constructor

    // 0x100217780, 32 bytes, base-object constructor, inline, placed by class name
    // SharedArray<unsigned int>::SharedArray(unsigned long)
    void SharedArray<unsigned int>::SharedArray(ulong param_1) {
        *(ulong*)this = param_1;
        make_shared<unsigned int[]>((jag*)(this + 8), param_1);
    }

    // 0x100224620, 32 bytes, base-object constructor, inline, placed by class name
    // SharedArray<std::unique_ptr<oldscape::rs2lib::worldmap::LocationData, std::default_delete<oldscape::rs2lib::worldmap::LocationData> > >::SharedArray(unsigned long)
    /* SharedArray<std::unique_ptr<oldscape::rs2lib::worldmap::LocationData,
   std::default_delete<oldscape::rs2lib::worldmap::LocationData> > >::SharedArray(unsigned
   long) */

    void jag::SharedArray<std::unique_ptr<oldscape::rs2lib::worldmap::LocationData,
                                          std::default_delete<oldscape::rs2lib::worldmap::LocationData>>>::
        SharedArray(SharedArray<std::unique_ptr<oldscape::rs2lib::worldmap::LocationData,
                                                std::default_delete<oldscape::rs2lib::worldmap::LocationData>>>* this,
                    ulong param_1) {
        *(ulong*)this = param_1;
        make_shared<std::unique_ptr<oldscape::rs2lib::worldmap::LocationData,
                                    std::default_delete<oldscape::rs2lib::worldmap::LocationData>>[]>((jag*)(this + 8),
                                                                                                      param_1);
    }

    // 0x1002be550, 48 bytes, inline, placed by class name
    // SharedArray<Array<unsigned char, eastl::allocator> >::operator=(SharedArray<Array<unsigned char, eastl::allocator> >&&)
    /* SharedArray<Array<unsigned char, eastl::allocator>
   >::TEMPNAMEPLACEHOLDERVALUE(SharedArray<Array<unsigned char, eastl::allocator> >&&) */

    SharedArray<Array<unsigned char, eastl::allocator>>* SharedArray<Array<unsigned char, eastl::allocator>>::operator=(
        SharedArray<Array<unsigned char, eastl::allocator>>* this, SharedArray* param_1) {
        *(undefined8*)this = *(undefined8*)param_1;
        *(undefined8*)param_1 = 0;
        shared_ptr<Array<unsigned char, eastl::allocator>[]>::operator=(
            (shared_ptr<Array<unsigned char, eastl::allocator>[]>*)(this + 8), (shared_ptr*)(param_1 + 8));
        return this;
    }

    // 0x1003148f0, 16 bytes, complete-object constructor, inline, placed by class name
    // SharedArray<signed char>::SharedArray(unsigned long): jumps straight to the base-object constructor

    // 0x100314900, 48 bytes, inline, placed by class name
    // SharedArray<signed char>::operator=(SharedArray<signed char>&&)
    /* SharedArray<signed char>::TEMPNAMEPLACEHOLDERVALUE(SharedArray<signed char>&&) */

    SharedArray<signed char>* SharedArray<signed char>::operator=(SharedArray* param_1) {
        *(undefined8*)this = *(undefined8*)param_1;
        *(undefined8*)param_1 = 0;
        shared_ptr<signed char[]>::operator=((shared_ptr<signed char[]>*)(this + 8), (shared_ptr*)(param_1 + 8));
        return this;
    }

    // 0x10031e940, 16 bytes, complete-object constructor, inline, placed by class name
    // SharedArray<Array<unsigned char, eastl::allocator> >::SharedArray(unsigned long): jumps straight to the base-object constructor

    // 0x10031eab0, 32 bytes, inline, placed by class name
    // SharedArray<unsigned int>::clear()
    void SharedArray<unsigned int>::clear() {
        *(undefined8*)this = 0;
        shared_ptr<unsigned int[]>::reset();
    }

    // 0x10031ead0, 32 bytes, inline, placed by class name
    // SharedArray<Array<unsigned char, eastl::allocator> >::clear()
    void SharedArray<Array<unsigned char, eastl::allocator>>::clear(
        SharedArray<Array<unsigned char, eastl::allocator>>* this) {
        *(undefined8*)this = 0;
        shared_ptr<Array<unsigned char, eastl::allocator>[]>::reset();
    }

    // 0x100336030, 32 bytes, base-object constructor, inline, placed by class name
    // SharedArray<signed char>::SharedArray(unsigned long)
    void SharedArray<signed char>::SharedArray(ulong param_1) {
        *(ulong*)this = param_1;
        make_shared<signed char[]>((jag*)(this + 8), param_1);
    }

    // 0x100336c80, 32 bytes, base-object constructor, inline, placed by class name
    // SharedArray<Array<unsigned char, eastl::allocator> >::SharedArray(unsigned long)
    void SharedArray<Array<unsigned char, eastl::allocator>>::SharedArray(
        SharedArray<Array<unsigned char, eastl::allocator>>* this, ulong param_1) {
        *(ulong*)this = param_1;
        make_shared<Array<unsigned char, eastl::allocator>[]>((jag*)(this + 8), param_1);
    }

    // 0x100366e00, 48 bytes, inline, placed by class name
    // SharedArray<unsigned int>::operator=(SharedArray<unsigned int>&&)
    /* SharedArray<unsigned int>::TEMPNAMEPLACEHOLDERVALUE(SharedArray<unsigned int>&&) */

    SharedArray<unsigned int>* SharedArray<unsigned int>::operator=(SharedArray* param_1) {
        *(undefined8*)this = *(undefined8*)param_1;
        *(undefined8*)param_1 = 0;
        shared_ptr<unsigned int[]>::operator=((shared_ptr<unsigned int[]>*)(this + 8), (shared_ptr*)(param_1 + 8));
        return this;
    }

} // namespace jag
