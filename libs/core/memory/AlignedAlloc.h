// libs/core/memory/AlignedAlloc.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::math {
    // 0x100988340
    Matrix43T<float>* Matrix43T<float>::SetToIdentity() {
        Set(this, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0);
        return this;
    }

    // 0x100988f80
    Matrix43T<float>* Matrix43T<float>::Translate(const Vector3T<float>& vector3) {
        (*((this + 36))) += vector3;
        return this;
    }

    // 0x100988fa0
    auto Matrix43T<float>::Set(const QuaternionT<float>& quaternion, const Vector3T<float>& vector3) {
        auto result;

        QuaternionT<float> local_38(quaternion);
        Matrix33T<float> local_60(local_38);
        Set(&result, &local_60, vector3);
        return result;
    }

    // 0x100988ff0
    auto Matrix43T<float>::Set(const Matrix33T<float>& matrix33, const Vector3T<float>& vector3) {
        auto result;

        Vector3T<float>* pVVar1 = &matrix33[0];
        result.Set(*pVVar1);
        pVVar1 = &matrix33[1];
        &result[1].field_4.Set(*pVVar1);
        pVVar1 = &matrix33[2];
        ((&result + 3))->Set(*pVVar1);
        &result[4].field_4.Set(vector3);
        return result;
    }

} // namespace jag::math

// 0x100987ea0
void is_aligned(unsigned long arg1, unsigned int arg2) {
    return arg1 % (unsigned long)arg2 == 0;
}

namespace jag {
    // 0x100989690
    shared_ptr_if_not_array<graphics::Animation>::type make_shared<graphics::Animation>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_2c;
        Animation* local_28[2];

        auto arg1 = aligned_alloc(232, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<graphics::Animation>::type result;
        } else {
            local_28[0] = placement_new<graphics::Animation>((void*)((long)arg1 + 32));
            local_2c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<graphics::Animation>, int, graphics::Animation*&>(arg1, &local_2c,
                                                                                                   local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

} // namespace jag
