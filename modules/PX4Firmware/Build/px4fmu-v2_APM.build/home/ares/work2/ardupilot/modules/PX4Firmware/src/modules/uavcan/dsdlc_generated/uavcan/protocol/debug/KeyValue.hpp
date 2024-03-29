/*
 * UAVCAN data structure definition for libuavcan.
 *
 * Autogenerated, do not edit.
 *
 * Source file: /home/ares/work2/ardupilot/modules/uavcan/dsdl/uavcan/protocol/debug/1022.KeyValue.uavcan
 */

#pragma once

#include <uavcan/build_config.hpp>
#include <uavcan/node/global_data_type_registry.hpp>
#include <uavcan/marshal/types.hpp>

/******************************* Source text **********************************
#
# Generic named parameter (key/value pair).
#

uint3 TYPE_UNDEF   = 0
uint3 TYPE_INTEGER = 1
uint3 TYPE_FLOAT   = 2
uint3 TYPE_STRING  = 3
uint3 TYPE_BYTES   = 4
uint3 type

uint8[<64] key

float64[<=1] numeric_value  # For type = INTEGER, FLOAT
uint8[<256] binary_value    # For type = STRING, BYTES
******************************************************************************/

/********************* DSDL signature source definition ***********************
uavcan.protocol.debug.KeyValue
saturated uint3 type
saturated uint8[<=63] key
saturated float64[<=1] numeric_value
saturated uint8[<=255] binary_value
saturated uint3 TYPE_BYTES = 4
saturated uint3 TYPE_FLOAT = 2
saturated uint3 TYPE_INTEGER = 1
saturated uint3 TYPE_STRING = 3
saturated uint3 TYPE_UNDEF = 0
******************************************************************************/

#undef type
#undef key
#undef numeric_value
#undef binary_value
#undef TYPE_UNDEF
#undef TYPE_INTEGER
#undef TYPE_FLOAT
#undef TYPE_STRING
#undef TYPE_BYTES

#ifndef UAVCAN_PACK_STRUCTS
# error UAVCAN_PACK_STRUCTS
#endif

namespace uavcan
{
namespace protocol
{
namespace debug
{

#if UAVCAN_PACK_STRUCTS
UAVCAN_PACKED_BEGIN
#endif

template <int _tmpl>
struct UAVCAN_EXPORT KeyValue_
{
    typedef const KeyValue_<_tmpl>& ParameterType;
    typedef KeyValue_<_tmpl>& ReferenceType;

    struct ConstantTypes
    {
        typedef ::uavcan::IntegerSpec< 3, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > TYPE_UNDEF;
        typedef ::uavcan::IntegerSpec< 3, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > TYPE_INTEGER;
        typedef ::uavcan::IntegerSpec< 3, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > TYPE_FLOAT;
        typedef ::uavcan::IntegerSpec< 3, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > TYPE_STRING;
        typedef ::uavcan::IntegerSpec< 3, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > TYPE_BYTES;
    };

    struct FieldTypes
    {
        typedef ::uavcan::IntegerSpec< 3, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > type;
        typedef ::uavcan::Array< ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate >, ::uavcan::ArrayModeDynamic, 63 > key;
        typedef ::uavcan::Array< ::uavcan::FloatSpec< 64, ::uavcan::CastModeSaturate >, ::uavcan::ArrayModeDynamic, 1 > numeric_value;
        typedef ::uavcan::Array< ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate >, ::uavcan::ArrayModeDynamic, 255 > binary_value;
    };

    enum
    {
        MinBitLen
            = FieldTypes::type::MinBitLen
            + FieldTypes::key::MinBitLen
            + FieldTypes::numeric_value::MinBitLen
            + FieldTypes::binary_value::MinBitLen
    };

    enum
    {
        MaxBitLen
            = FieldTypes::type::MaxBitLen
            + FieldTypes::key::MaxBitLen
            + FieldTypes::numeric_value::MaxBitLen
            + FieldTypes::binary_value::MaxBitLen
    };

    // Constants
    static const typename ::uavcan::StorageType< typename ConstantTypes::TYPE_UNDEF >::Type TYPE_UNDEF; // 0
    static const typename ::uavcan::StorageType< typename ConstantTypes::TYPE_INTEGER >::Type TYPE_INTEGER; // 1
    static const typename ::uavcan::StorageType< typename ConstantTypes::TYPE_FLOAT >::Type TYPE_FLOAT; // 2
    static const typename ::uavcan::StorageType< typename ConstantTypes::TYPE_STRING >::Type TYPE_STRING; // 3
    static const typename ::uavcan::StorageType< typename ConstantTypes::TYPE_BYTES >::Type TYPE_BYTES; // 4

    // Fields
    typename ::uavcan::StorageType< typename FieldTypes::type >::Type type;
    typename ::uavcan::StorageType< typename FieldTypes::key >::Type key;
    typename ::uavcan::StorageType< typename FieldTypes::numeric_value >::Type numeric_value;
    typename ::uavcan::StorageType< typename FieldTypes::binary_value >::Type binary_value;

    KeyValue_()
        : type()
        , key()
        , numeric_value()
        , binary_value()
    {
        enum { MaxByteLen = ::uavcan::BitLenToByteLen<MaxBitLen>::Result };
        ::uavcan::StaticAssert<int(MaxByteLen) <= int(::uavcan::MaxTransferPayloadLen)>::check();

        ::uavcan::StaticAssert<_tmpl == 0>::check();  // Usage check

#if UAVCAN_DEBUG
        /*
         * Cross-checking MaxBitLen provided by the DSDL compiler.
         * This check shall never be performed in user code because MaxBitLen value
         * actually depends on the nested types, thus it is not invariant.
         */
        ::uavcan::StaticAssert<2626 == MaxBitLen>::check();
#endif
    }

    bool operator==(ParameterType rhs) const;
    bool operator!=(ParameterType rhs) const { return !operator==(rhs); }

    /**
     * This comparison is based on @ref uavcan::areClose(), which ensures proper comparison of
     * floating point fields at any depth.
     */
    bool isClose(ParameterType rhs) const;

    static int encode(ParameterType self, ::uavcan::ScalarCodec& codec,
                      ::uavcan::TailArrayOptimizationMode tao_mode = ::uavcan::TailArrayOptEnabled);

    static int decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
                      ::uavcan::TailArrayOptimizationMode tao_mode = ::uavcan::TailArrayOptEnabled);

    /*
     * Static type info
     */
    enum { DataTypeKind = ::uavcan::DataTypeKindMessage };
    enum { DefaultDataTypeID = 1022 };

    static const char* getDataTypeFullName()
    {
        return "uavcan.protocol.debug.KeyValue";
    }

    static void extendDataTypeSignature(::uavcan::DataTypeSignature& signature)
    {
        signature.extend(getDataTypeSignature());
    }

    static ::uavcan::DataTypeSignature getDataTypeSignature();

};

#if UAVCAN_PACK_STRUCTS
UAVCAN_PACKED_END
#endif

/*
 * Out of line struct method definitions
 */

template <int _tmpl>
bool KeyValue_<_tmpl>::operator==(ParameterType rhs) const
{
    return
        type == rhs.type &&
        key == rhs.key &&
        numeric_value == rhs.numeric_value &&
        binary_value == rhs.binary_value;
}

template <int _tmpl>
bool KeyValue_<_tmpl>::isClose(ParameterType rhs) const
{
    return
        ::uavcan::areClose(type, rhs.type) &&
        ::uavcan::areClose(key, rhs.key) &&
        ::uavcan::areClose(numeric_value, rhs.numeric_value) &&
        ::uavcan::areClose(binary_value, rhs.binary_value);
}

template <int _tmpl>
int KeyValue_<_tmpl>::encode(ParameterType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::type::encode(self.type, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::key::encode(self.key, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::numeric_value::encode(self.numeric_value, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::binary_value::encode(self.binary_value, codec,  tao_mode);
    return res;
}

template <int _tmpl>
int KeyValue_<_tmpl>::decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::type::decode(self.type, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::key::decode(self.key, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::numeric_value::decode(self.numeric_value, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::binary_value::decode(self.binary_value, codec,  tao_mode);
    return res;
}

/*
 * Out of line type method definitions
 */
template <int _tmpl>
::uavcan::DataTypeSignature KeyValue_<_tmpl>::getDataTypeSignature()
{
    ::uavcan::DataTypeSignature signature(0x6DDE03F787E389D8ULL);

    FieldTypes::type::extendDataTypeSignature(signature);
    FieldTypes::key::extendDataTypeSignature(signature);
    FieldTypes::numeric_value::extendDataTypeSignature(signature);
    FieldTypes::binary_value::extendDataTypeSignature(signature);

    return signature;
}

/*
 * Out of line constant definitions
 */

template <int _tmpl>
const typename ::uavcan::StorageType< typename KeyValue_<_tmpl>::ConstantTypes::TYPE_UNDEF >::Type
    KeyValue_<_tmpl>::TYPE_UNDEF = 0U; // 0

template <int _tmpl>
const typename ::uavcan::StorageType< typename KeyValue_<_tmpl>::ConstantTypes::TYPE_INTEGER >::Type
    KeyValue_<_tmpl>::TYPE_INTEGER = 1U; // 1

template <int _tmpl>
const typename ::uavcan::StorageType< typename KeyValue_<_tmpl>::ConstantTypes::TYPE_FLOAT >::Type
    KeyValue_<_tmpl>::TYPE_FLOAT = 2U; // 2

template <int _tmpl>
const typename ::uavcan::StorageType< typename KeyValue_<_tmpl>::ConstantTypes::TYPE_STRING >::Type
    KeyValue_<_tmpl>::TYPE_STRING = 3U; // 3

template <int _tmpl>
const typename ::uavcan::StorageType< typename KeyValue_<_tmpl>::ConstantTypes::TYPE_BYTES >::Type
    KeyValue_<_tmpl>::TYPE_BYTES = 4U; // 4

/*
 * Final typedef
 */
typedef KeyValue_<0> KeyValue;

namespace
{

const ::uavcan::DefaultDataTypeRegistrator< ::uavcan::protocol::debug::KeyValue > _uavcan_gdtr_registrator_KeyValue;

}

} // Namespace uavcan
} // Namespace protocol
} // Namespace debug

/*
 * YAML streamer specialization
 */
namespace uavcan
{

template <>
class UAVCAN_EXPORT YamlStreamer< ::uavcan::protocol::debug::KeyValue >
{
public:
    template <typename Stream>
    static void stream(Stream& s, ::uavcan::protocol::debug::KeyValue::ParameterType obj, const int level);
};

template <typename Stream>
void YamlStreamer< ::uavcan::protocol::debug::KeyValue >::stream(Stream& s, ::uavcan::protocol::debug::KeyValue::ParameterType obj, const int level)
{
    (void)s;
    (void)obj;
    (void)level;
    if (level > 0)
    {
        s << '\n';
        for (int pos = 0; pos < level; pos++)
        {
            s << "  ";
        }
    }
    s << "type: ";
    YamlStreamer< ::uavcan::protocol::debug::KeyValue::FieldTypes::type >::stream(s, obj.type, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "key: ";
    YamlStreamer< ::uavcan::protocol::debug::KeyValue::FieldTypes::key >::stream(s, obj.key, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "numeric_value: ";
    YamlStreamer< ::uavcan::protocol::debug::KeyValue::FieldTypes::numeric_value >::stream(s, obj.numeric_value, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "binary_value: ";
    YamlStreamer< ::uavcan::protocol::debug::KeyValue::FieldTypes::binary_value >::stream(s, obj.binary_value, level + 1);
}

}

namespace uavcan
{
namespace protocol
{
namespace debug
{

template <typename Stream>
inline Stream& operator<<(Stream& s, ::uavcan::protocol::debug::KeyValue::ParameterType obj)
{
    ::uavcan::YamlStreamer< ::uavcan::protocol::debug::KeyValue >::stream(s, obj, 0);
    return s;
}

}
}
}