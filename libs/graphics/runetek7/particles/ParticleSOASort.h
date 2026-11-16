// libs/graphics/runetek7/particles/ParticleSOASort.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.graphics

namespace jag::graphics::helpers {
    // 0x1007f30d0
    uint64_t ParticleSOAIterator::operator!=(const ParticleSOAIterator& particleSOAIterator) const {
        if (field_8 != particleSOAIterator.field_8) {
            LogAssert("m_particleData == other.m_particleData",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "particles/ParticleSOASort.h",
                      70, nullptr);
        }
        return field_0 != particleSOAIterator.field_0;
    }

    // 0x1007f3170
    long ParticleSOAIterator::operator-(const ParticleSOAIterator& particleSOAIterator) const {
        return field_0 - particleSOAIterator.field_0;
    }

    // 0x1007f33a0
    ParticleSOAIterator ParticleSOAIterator::operator+(unsigned long arg1) const {
        ParticleSOAIterator local_18;

        ParticleSOAIterator(&local_18, arg1 + field_0, field_8);
        return local_18;
    }

    // 0x1007f38a0
    ParticleDataRefProxy ParticleSOAIterator::operator*() const {

        return local_18(field_0, field_8);
        return local_18;
    }

    // 0x1007f38d0
    ParticleDataRefProxy::operator ParticleDataValueProxy() const {
        return auto(field_0, field_8);
    }

    // 0x1007f3900
    ParticleSOAIterator ParticleSOAIterator::operator-(unsigned long arg1) const {
        ParticleSOAIterator local_18;

        ParticleSOAIterator(&local_18, field_0 - arg1, field_8);
        return local_18;
    }

    // 0x1007f3cd0
    void SortParticleData(ParticleData&)::$_5::operator()(const ParticleDataValueProxy& particleDataValueProxy1,
                                                          const ParticleDataValueProxy& particleDataValueProxy2) const {
        *this > particleDataValueProxy1;
    }

    // 0x1007f3ce0
    reverse_iterator<char*>* ParticleSOAIterator::operator--() {
        *(long*)this = *(long*)this - 1;
        return this;
    }

    // 0x1007f3cf0
    unsigned long ParticleSOAIterator::operator>=(const ParticleSOAIterator& particleSOAIterator) const {
        if (field_8 != particleSOAIterator.field_8) {
            LogAssert("m_particleData == other.m_particleData",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "particles/ParticleSOASort.h",
                      68, nullptr);
        }
        return *this < particleSOAIterator ^ 1;
    }

    // 0x1007f3d50
    bool ParticleDataValueProxy::operator>(const ParticleDataValueProxy& particleDataValueProxy) const {
        return (float)particleDataValueProxy.field_16 <= (float)field_16 &&
               (float)field_16 != (float)particleDataValueProxy.field_16;
    }

    // 0x1007f3d70
    uint64_t ParticleSOAIterator::operator<(const ParticleSOAIterator& particleSOAIterator) const {
        if (field_8 != particleSOAIterator.field_8) {
            LogAssert("m_particleData == other.m_particleData",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "particles/ParticleSOASort.h",
                      67, nullptr);
        }
        return field_0 < particleSOAIterator.field_0;
    }

} // namespace jag::graphics::helpers
