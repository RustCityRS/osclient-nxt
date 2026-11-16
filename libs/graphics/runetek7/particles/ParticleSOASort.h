// libs/graphics/runetek7/particles/ParticleSOASort.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.graphics

namespace jag::graphics::helpers {
    // 0x1007f30d0, 80 bytes, inline, placed by debug map only (low confidence)
    // ParticleSOAIterator::operator!=(ParticleSOAIterator const&) const
    /* ParticleSOAIterator::TEMPNAMEPLACEHOLDERVALUE(ParticleSOAIterator
   const&) const */

    undefined8 ParticleSOAIterator::operator!=(ParticleSOAIterator* param_1) {
        if (field_8 != param_1->field_8) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_particleData == other.m_particleData",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "particles/ParticleSOASort.h",
                      70, (char*)0);
        }
        return CONCAT71((int7)(field_0 >> 8), field_0 != param_1->field_0);
    }

    // 0x1007f3170, 16 bytes, inline, placed by debug map only (low confidence)
    // ParticleSOAIterator::operator-(ParticleSOAIterator const&) const
    /* ParticleSOAIterator::TEMPNAMEPLACEHOLDERVALUE(ParticleSOAIterator
   const&) const */

    long ParticleSOAIterator::operator-(ParticleSOAIterator* param_1) {
        return field_0 - param_1->field_0;
    }

    // 0x1007f33a0, 48 bytes, inline, placed by debug map only (low confidence)
    // ParticleSOAIterator::operator+(unsigned long) const
    /* ParticleSOAIterator::TEMPNAMEPLACEHOLDERVALUE(unsigned long) const */

    ParticleSOAIterator ParticleSOAIterator::operator+(ulong param_1) {
        ParticleSOAIterator local_18;

        ParticleSOAIterator(&local_18, param_1 + field_0, field_8);
        return local_18;
    }

    // 0x1007f38a0, 48 bytes, inline, placed by debug map only (low confidence)
    // ParticleSOAIterator::operator*() const
    /* ParticleSOAIterator::TEMPNAMEPLACEHOLDERVALUE() const */

    ParticleDataRefProxy ParticleSOAIterator::operator*() {
        ParticleDataRefProxy local_18;

        new (&local_18) ParticleDataRefProxy(field_0, field_8);
        return local_18;
    }

    // 0x1007f38d0, 48 bytes, inline, placed by debug map only (low confidence)
    // ParticleDataRefProxy::operator ParticleDataValueProxy() const
    ParticleDataValueProxy*
    ParticleDataRefProxy::operator_cast_to_ParticleDataValueProxy(ParticleDataValueProxy* __return_storage_ptr__,
                                                                  ParticleDataRefProxy* this) {
        ParticleDataValueProxy::ParticleDataValueProxy(__return_storage_ptr__, field_0, field_8);
        return __return_storage_ptr__;
    }

    // 0x1007f3900, 48 bytes, inline, placed by debug map only (low confidence)
    // ParticleSOAIterator::operator-(unsigned long) const
    /* ParticleSOAIterator::TEMPNAMEPLACEHOLDERVALUE(unsigned long) const */

    ParticleSOAIterator ParticleSOAIterator::operator-(ulong param_1) {
        ParticleSOAIterator local_18;

        ParticleSOAIterator(&local_18, field_0 - param_1, field_8);
        return local_18;
    }

    // 0x1007f3cd0, 16 bytes, placed by debug map only (low confidence)
    // SortParticleData(ParticleData&)::$_5::operator()(ParticleDataValueProxy const&, ParticleDataValueProxy const&) const
    /* SortParticleData(ParticleData&)::$_5::TEMPNAMEPLACEHOLDERVALUE(ParticleDataValueProxy
   const&, ParticleDataValueProxy const&) const */

    void SortParticleData(ParticleData&)::$_5::operator()(ParticleDataValueProxy* param_1,
                                                          ParticleDataValueProxy* param_2) {
        ParticleDataValueProxy::operator>(param_1, param_2);
    }

    // 0x1007f3ce0, 16 bytes, inline, placed by debug map only (low confidence)
    // ParticleSOAIterator::operator--()
    /* eastl::reverse_iterator<char*>::TEMPNAMEPLACEHOLDERVALUE() */

    reverse_iterator<char*>* eastl::reverse_iterator<char*>::operator++() {
        *(long*)this = *(long*)this + -1;
        return this;
    }

    // 0x1007f3cf0, 80 bytes, inline, placed by debug map only (low confidence)
    // ParticleSOAIterator::operator>=(ParticleSOAIterator const&) const
    /* ParticleSOAIterator::TEMPNAMEPLACEHOLDERVALUE(ParticleSOAIterator
   const&) const */

    ulong ParticleSOAIterator::operator>=(ParticleSOAIterator* param_1) {
        if (field_8 != param_1->field_8) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_particleData == other.m_particleData",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "particles/ParticleSOASort.h",
                      68, (char*)0);
        }
        return operator<(this, param_1) ^ 1;
    }

    // 0x1007f3d50, 32 bytes, inline, placed by debug map only (low confidence)
    // ParticleDataValueProxy::operator>(ParticleDataValueProxy const&) const
    /* ParticleDataValueProxy::TEMPNAMEPLACEHOLDERVALUE(ParticleDataValueProxy
   const&) const */

    bool ParticleDataValueProxy::operator>(ParticleDataValueProxy* param_1) {
        return (float)param_1->field_16 <= (float)field_16 && (float)field_16 != (float)param_1->field_16;
    }

    // 0x1007f3d70, 80 bytes, inline, placed by debug map only (low confidence)
    // ParticleSOAIterator::operator<(ParticleSOAIterator const&) const
    /* ParticleSOAIterator::TEMPNAMEPLACEHOLDERVALUE(ParticleSOAIterator
   const&) const */

    undefined8 ParticleSOAIterator::operator<(ParticleSOAIterator* param_1) {
        if (field_8 != param_1->field_8) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_particleData == other.m_particleData",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "particles/ParticleSOASort.h",
                      67, (char*)0);
        }
        return CONCAT71((int7)(field_0 >> 8), field_0 < param_1->field_0);
    }

} // namespace jag::graphics::helpers
