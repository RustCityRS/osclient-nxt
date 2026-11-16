// libs/jtl/SharedArray.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    template <
        typename...> // 4 instantiations, e.g. <Array<unsigned char> >, <signed char>, <std::unique_ptr<oldscape::rs2lib::worldmap::LocationData, std::default_delete<o
    class SharedArray {
    public:
        void operator[](unsigned long arg1) const;
        SharedArray(SharedArray<unsigned int>&& sharedArray);
        void operator[](unsigned long arg1);
        SharedArray();
        ~SharedArray();
        bool empty() const;
        void ref_assign(const SharedArray<signed char>& sharedArray);
        void data();
        void ref_assign(const SharedArray<unsigned int>& sharedArray);
        SharedArray(unsigned long arg1);
        void operator=(SharedArray<std::unique_ptr<oldscape::rs2lib::worldmap::LocationData>>&& sharedArray);
        SharedArray<Array<unsigned char>>* operator=(SharedArray<Array<unsigned char>>&& sharedArray);
        SharedArray<signed char>* operator=(SharedArray<signed char>&& sharedArray);
        void clear();
        SharedArray<unsigned int>* operator=(SharedArray<unsigned int>&& sharedArray);
    };

    // 0x10000cb60
    void SharedArray<unsigned int>::operator[](unsigned long arg1) const {
        if (*(unsigned long*)this <= arg1) {
            LogAssert("(index < m_Size)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/SharedArray.h", 310,
                      "Index of %d outside range 0 to %d", arg1, *(unsigned long*)this - 1);
        }
        (*((shared_ptr<unsigned int[]>*)(this + 8)))[arg1];
    }

    // 0x10002a420
    SharedArray<unsigned int>::SharedArray(SharedArray<unsigned int>&& sharedArray) {
        *(uint64_t*)this = *(uint64_t*)sharedArray;
        new ((shared_ptr<Array<unsigned char>[]>*)(this + 8))
            shared_ptr((shared_ptr<signed_char_[]>*)(sharedArray + 8));
        *(uint64_t*)sharedArray = 0;
    }

    // 0x1000bf270
    void SharedArray<unsigned int>::operator[](unsigned long arg1) {
        if (*(unsigned long*)this <= arg1) {
            LogAssert("(index < m_Size)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/SharedArray.h", 299,
                      "Index of %d outside range 0 to %d", arg1, *(unsigned long*)this - 1);
        }
        (*((shared_ptr<unsigned int[]>*)(this + 8)))[arg1];
    }

    // 0x10012d310
    SharedArray<Array<unsigned char>>::SharedArray() {
        *(uint64_t*)this = 0;
        new ((this + 8)) shared_ptr();
    }

    // 0x10012d360
    SharedArray<Array<unsigned char>>::~SharedArray() {
        ((shared_ptr<unsigned int[]>*)(this + 8))->~shared_ptr();
    }

    // 0x1001ca480
    bool SharedArray<signed char>::empty() const {
        return *(long*)this == 0;
    }

    // 0x1001ddf00
    void SharedArray<signed char>::ref_assign(const SharedArray<signed char>& sharedArray) {
        *(uint64_t*)this = *(uint64_t*)sharedArray;
        (*((shared_ptr<signed char[]>*)(this + 8))) = (*((shared_ptr<signed_char_[]>*)(sharedArray + 8)));
    }

    // 0x1002034d0
    void SharedArray<unsigned int>::data() {
        ((this + 8))->end();
    }

    // 0x10020b550
    void SharedArray<unsigned int>::ref_assign(const SharedArray<unsigned int>& sharedArray) {
        *(uint64_t*)this = *(uint64_t*)sharedArray;
        (*((shared_ptr<unsigned int[]>*)(this + 8))) = (*((shared_ptr<unsigned_int_[]>*)(sharedArray + 8)));
    }

    // 0x10020f9a0
    void SharedArray<std::unique_ptr<oldscape::rs2lib::worldmap::LocationData>>::operator=(
        SharedArray<std::unique_ptr<oldscape::rs2lib::worldmap::LocationData>>&& sharedArray) {
        *(uint64_t*)this = *(uint64_t*)sharedArray;
        *(uint64_t*)sharedArray = 0;
        (*((shared_ptr<std::unique_ptr<oldscape::rs2lib::worldmap::LocationData>[]>*)(this + 8))) =
            (*((shared_ptr<std::unique_ptr<oldscape::rs2lib::worldmap::LocationData,
                                           std::default_delete<oldscape::rs2lib::worldmap::LocationData> _>
                               _[]>*)(sharedArray + 8)));
        return this;
    }

    // 0x100217780
    SharedArray<unsigned int>::SharedArray(unsigned long arg1) {
        *(unsigned long*)this = arg1;
        make_shared<unsigned int[]>((ReturnValue*)(this + 8), arg1);
    }

    // 0x100224620
    SharedArray<std::unique_ptr<oldscape::rs2lib::worldmap::LocationData>>::SharedArray(unsigned long arg1) {
        *(unsigned long*)this = arg1;
        make_shared<std::unique_ptr<oldscape::rs2lib::worldmap::LocationData>[]>((ReturnValue*)(this + 8), arg1);
    }

    // 0x1002be550
    SharedArray<Array<unsigned char>>*
    SharedArray<Array<unsigned char>>::operator=(SharedArray<Array<unsigned char>>&& sharedArray) {
        *(uint64_t*)this = *(uint64_t*)sharedArray;
        *(uint64_t*)sharedArray = 0;
        (*((shared_ptr<Array<unsigned char>[]>*)(this + 8))) =
            (*((shared_ptr<Array<unsigned char> _[]>*)(sharedArray + 8)));
        return this;
    }

    // 0x100314900
    SharedArray<signed char>* SharedArray<signed char>::operator=(SharedArray<signed char>&& sharedArray) {
        *(uint64_t*)this = *(uint64_t*)sharedArray;
        *(uint64_t*)sharedArray = 0;
        (*((shared_ptr<signed char[]>*)(this + 8))) = (*((shared_ptr<signed_char_[]>*)(sharedArray + 8)));
        return this;
    }

    // 0x10031eab0
    void SharedArray<unsigned int>::clear() {
        *(uint64_t*)this = 0;
        ((shared_ptr<unsigned int[]>*)(this + 8))->reset();
    }

    // 0x10031ead0
    void SharedArray<Array<unsigned char>>::clear() {
        *(uint64_t*)this = 0;
        ((shared_ptr<Array<unsigned char>[]>*)(this + 8))->reset();
    }

    // 0x100336030
    SharedArray<signed char>::SharedArray(unsigned long arg1) {
        *(unsigned long*)this = arg1;
        make_shared<signed char[]>((ReturnValue*)(this + 8), arg1);
    }

    // 0x100336c80
    SharedArray<Array<unsigned char>>::SharedArray(unsigned long arg1) {
        *(unsigned long*)this = arg1;
        make_shared<Array<unsigned char>[]>((ReturnValue*)(this + 8), arg1);
    }

    // 0x100366e00
    SharedArray<unsigned int>* SharedArray<unsigned int>::operator=(SharedArray<unsigned int>&& sharedArray) {
        *(uint64_t*)this = *(uint64_t*)sharedArray;
        *(uint64_t*)sharedArray = 0;
        (*((shared_ptr<unsigned int[]>*)(this + 8))) = (*((shared_ptr<unsigned_int_[]>*)(sharedArray + 8)));
        return this;
    }

} // namespace jag
