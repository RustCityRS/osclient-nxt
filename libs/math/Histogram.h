// libs/math/Histogram.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::math {
    template <typename...> // 2 instantiations, e.g. <float, 10>, <unsigned int, 30>
    class Histogram {
    public:
        void Push(float);
        void UpdateDerivedValues();
        Histogram();
        void Push(unsigned int);
    };

    // 0x1003dadd0, 112 bytes, inline, placed by class name and debug map
    // Histogram<float, 10>::Push(float)
    void Histogram<float, 10>::Push(Histogram<float, 10>* this, float param_1) {
        int iVar1;
        float* pfVar2;

        iVar1 = *(int*)(this + 40);
        pfVar2 = (float*)std::array<float, 10ul>::operator[]((array<float, 10ul>*)this, (long)iVar1);
        *pfVar2 = param_1;
        *(int*)(this + 40) = (iVar1 + 1) % 10;
        UpdateDerivedValues(this);
        this[56] = (Histogram<float, 10>)1;
    }

    // 0x1003e0160, 192 bytes, inline, placed by class name
    // Histogram<float, 10>::UpdateDerivedValues()
    void Histogram<float, 10>::UpdateDerivedValues(Histogram<float, 10>* this) {
        float fVar1;
        float* pfVar2;
        float* pfVar3;
        undefined4 uVar4;
        float fVar5;

        *(undefined8*)(this + 44) = 18410715274534715391;
        pfVar2 = (float*)begin();
        pfVar3 = (float*)end();
        if (pfVar2 == pfVar3) {
            fVar5 = 0.0;
        } else {
            fVar5 = 0.0;
            do {
                fVar1 = *pfVar2;
                fVar5 = fVar5 + fVar1;
                uVar4 = eastl::min<float>(*(float*)(this + 44), fVar1);
                *(undefined4*)(this + 44) = uVar4;
                uVar4 = eastl::max_alt(*(float*)(this + 48), fVar1);
                *(undefined4*)(this + 48) = uVar4;
                pfVar2 = pfVar2 + 1;
            } while (pfVar2 != pfVar3);
            fVar5 = fVar5 * 0.1;
        }
        *(float*)(this + 52) = fVar5;
    }

    // 0x1008a7350, 16 bytes, complete-object constructor, inline, placed by class name
    // Histogram<unsigned int, 30>::Histogram(): jumps straight to the base-object constructor

    // 0x1008a76c0, 112 bytes, inline, placed by class name
    // Histogram<unsigned int, 30>::Push(unsigned int)
    void Histogram<unsigned int, 30>::Push(Histogram<unsigned int, 30>* this, uint param_1) {
        int iVar1;
        uint* puVar2;
        int iVar3;

        puVar2 = (uint*)std::array<unsigned int, 30ul>::operator[]((array<unsigned int, 30ul>*)this,
                                                                   (long)*(int*)(this + 120));
        *puVar2 = param_1;
        iVar1 = *(int*)(this + 120);
        iVar3 = (int)((ulong)((long)(iVar1 + 1) * -2004318071) >> 32) + iVar1 + 1;
        *(int*)(this + 120) = iVar1 + ((iVar3 >> 4) - (iVar3 >> 31)) * -30 + 1;
        UpdateDerivedValues(this);
        this[136] = (Histogram<unsigned int, 30>)1;
    }

    // 0x1008d0c60, 64 bytes, base-object constructor, inline, placed by class name
    // Histogram<unsigned int, 30>::Histogram()
    void Histogram<unsigned int, 30>::Histogram(Histogram<unsigned int, 30>* this) {
        uint local_c;

        *(undefined4*)(this + 140) = 0;
        *(undefined8*)(this + 120) = 0;
        *(undefined8*)(this + 128) = 0;
        this[136] = (Histogram<unsigned int, 30>)0;
        local_c = 0;
        fill(&local_c);
    }

    // 0x1008d0d20, 176 bytes, inline, placed by class name
    // Histogram<unsigned int, 30>::UpdateDerivedValues()
    void Histogram<unsigned int, 30>::UpdateDerivedValues(Histogram<unsigned int, 30>* this) {
        uint uVar1;
        undefined4 uVar2;
        uint* puVar3;
        uint* puVar4;
        double dVar5;

        *(undefined8*)(this + 124) = 4294967295;
        puVar3 = (uint*)begin();
        puVar4 = (uint*)end();
        if (puVar3 == puVar4) {
            uVar2 = 0;
        } else {
            dVar5 = 0.0;
            do {
                uVar1 = *puVar3;
                dVar5 = dVar5 + (double)uVar1;
                uVar2 = eastl::min<unsigned int>(*(uint*)(this + 124), uVar1);
                *(undefined4*)(this + 124) = uVar2;
                uVar2 = eastl::max<unsigned int>(*(uint*)(this + 128), uVar1);
                *(undefined4*)(this + 128) = uVar2;
                puVar3 = puVar3 + 1;
            } while (puVar3 != puVar4);
            uVar2 = (undefined4)(long)(dVar5 * 0.03333333333333333);
        }
        *(undefined4*)(this + 132) = uVar2;
    }

} // namespace jag::math
