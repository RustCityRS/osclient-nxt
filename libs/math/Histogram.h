// libs/math/Histogram.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::math {
    template <typename...> // 2 instantiations, e.g. <float, 10>, <unsigned int, 30>
    class Histogram {
    public:
        void Push(float arg1);
        void UpdateDerivedValues();
        Histogram();
        void Push(unsigned int arg1);
    };

    // 0x1003dadd0
    void Histogram<float, 10>::Push(float arg1) {
        int iVar1 = *(int*)(this + 40);
        float* pfVar2 = (float*)(*this)[(long)iVar1];
        *pfVar2 = arg1;
        *(int*)(this + 40) = (iVar1 + 1) % 10;
        UpdateDerivedValues(this);
        this[56] = (Histogram<float, 10>)1;
    }

    // 0x1003e0160
    void Histogram<float, 10>::UpdateDerivedValues() {
        float arg2;
        uint32_t uVar3;
        float fVar4;

        *(uint64_t*)(this + 44) = 18410715274534715391;
        float* pfVar1 = std::array<float, 10ul>::begin();
        float* pfVar2 = std::array<float, 10ul>::end();
        if (pfVar1 == pfVar2) {
            fVar4 = 0.0;
        } else {
            fVar4 = 0.0;
            do {
                arg2 = *pfVar1;
                fVar4 = fVar4 + arg2;
                uVar3 = eastl::min<float>(*(float*)(this + 44), arg2);
                *(uint32_t*)(this + 44) = uVar3;
                uVar3 = eastl::max_alt(*(float*)(this + 48), arg2);
                *(uint32_t*)(this + 48) = uVar3;
                pfVar1 = pfVar1 + 1;
            } while (pfVar1 != pfVar2);
            fVar4 = fVar4 * 0.1;
        }
        *(float*)(this + 52) = fVar4;
    }

    // 0x1008a76c0
    void Histogram<unsigned int, 30>::Push(unsigned int arg1) {
        unsigned int* puVar2 = (unsigned int*)(*this)[(long)*(int*)(this + 120)];
        *puVar2 = arg1;
        int iVar1 = *(int*)(this + 120);
        int iVar3 = (int)((unsigned long)((long)(iVar1 + 1) * -2004318071) >> 32) + iVar1 + 1;
        *(int*)(this + 120) = iVar1 + ((iVar3 >> 4) - (iVar3 >> 31)) * -30 + 1;
        UpdateDerivedValues(this);
        this[136] = (Histogram<unsigned int, 30>)1;
    }

    // 0x1008d0c60
    Histogram<unsigned int, 30>::Histogram() {
        *(uint32_t*)(this + 140) = 0;
        *(uint64_t*)(this + 120) = 0;
        *(uint64_t*)(this + 128) = 0;
        this[136] = (Histogram<unsigned int, 30>)0;
        fill(0);
    }

    // 0x1008d0d20
    void Histogram<unsigned int, 30>::UpdateDerivedValues() {
        unsigned int arg2;
        uint32_t uVar1;
        double dVar4;

        *(uint64_t*)(this + 124) = 4294967295;
        unsigned int* puVar2 = (unsigned int*)std::array<unsigned int, 30ul>::begin();
        unsigned int* puVar3 = (unsigned int*)std::array<unsigned int, 30ul>::end();
        if (puVar2 == puVar3) {
            uVar1 = 0;
        } else {
            dVar4 = 0.0;
            do {
                arg2 = *puVar2;
                dVar4 = dVar4 + (double)arg2;
                uVar1 = eastl::min<unsigned int>(*(unsigned int*)(this + 124), arg2);
                *(uint32_t*)(this + 124) = uVar1;
                uVar1 = eastl::max<unsigned int>(*(unsigned int*)(this + 128), arg2);
                *(uint32_t*)(this + 128) = uVar1;
                puVar2 = puVar2 + 1;
            } while (puVar2 != puVar3);
            uVar1 = (uint32_t)(long)(dVar4 * 0.03333333333333333);
        }
        *(uint32_t*)(this + 132) = uVar1;
    }

} // namespace jag::math
