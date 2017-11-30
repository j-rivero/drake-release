/** THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
 * BY HAND!!
 *
 * Generated by lcm-gen
 **/

#ifndef __robotlocomotion_robot_plan_t_hpp__
#define __robotlocomotion_robot_plan_t_hpp__

#include <lcm/lcm_coretypes.h>

#include <string>
#include <vector>
#include "bot_core/robot_state_t.hpp"
#include "robotlocomotion/grasp_transition_state_t.hpp"

namespace robotlocomotion
{

class robot_plan_t
{
    public:
        int64_t    utime;

        std::string robot_name;

        int32_t    num_states;

        std::vector< bot_core::robot_state_t > plan;

        std::vector< int32_t > plan_info;

        int32_t    num_grasp_transitions;

        std::vector< robotlocomotion::grasp_transition_state_t > grasps;

        int8_t     left_arm_control_type;

        int8_t     right_arm_control_type;

        int8_t     left_leg_control_type;

        int8_t     right_leg_control_type;

        int32_t    num_bytes;

        std::vector< uint8_t > matlab_data;

    public:
        static constexpr int8_t   NONE = 0;
        static constexpr int8_t   POSITION = 1;
        static constexpr int8_t   IMPEDANCE = 2;
        static constexpr int8_t   STIFF = 3;
        static constexpr int8_t   COMPLIANT = 4;

    public:
        /**
         * Encode a message into binary form.
         *
         * @param buf The output buffer.
         * @param offset Encoding starts at thie byte offset into @p buf.
         * @param maxlen Maximum number of bytes to write.  This should generally be
         *  equal to getEncodedSize().
         * @return The number of bytes encoded, or <0 on error.
         */
        inline int encode(void *buf, int offset, int maxlen) const;

        /**
         * Check how many bytes are required to encode this message.
         */
        inline int getEncodedSize() const;

        /**
         * Decode a message from binary form into this instance.
         *
         * @param buf The buffer containing the encoded message.
         * @param offset The byte offset into @p buf where the encoded message starts.
         * @param maxlen The maximum number of bytes to read while decoding.
         * @return The number of bytes decoded, or <0 if an error occured.
         */
        inline int decode(const void *buf, int offset, int maxlen);

        /**
         * Retrieve the 64-bit fingerprint identifying the structure of the message.
         * Note that the fingerprint is the same for all instances of the same
         * message type, and is a fingerprint on the message type definition, not on
         * the message contents.
         */
        inline static int64_t getHash();

        /**
         * Returns "robot_plan_t"
         */
        inline static const char* getTypeName();

        // LCM support functions. Users should not call these
        inline int _encodeNoHash(void *buf, int offset, int maxlen) const;
        inline int _getEncodedSizeNoHash() const;
        inline int _decodeNoHash(const void *buf, int offset, int maxlen);
        inline static uint64_t _computeHash(const __lcm_hash_ptr *p);
};

int robot_plan_t::encode(void *buf, int offset, int maxlen) const
{
    int pos = 0, tlen;
    int64_t hash = getHash();

    tlen = __int64_t_encode_array(buf, offset + pos, maxlen - pos, &hash, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = this->_encodeNoHash(buf, offset + pos, maxlen - pos);
    if (tlen < 0) return tlen; else pos += tlen;

    return pos;
}

int robot_plan_t::decode(const void *buf, int offset, int maxlen)
{
    int pos = 0, thislen;

    int64_t msg_hash;
    thislen = __int64_t_decode_array(buf, offset + pos, maxlen - pos, &msg_hash, 1);
    if (thislen < 0) return thislen; else pos += thislen;
    if (msg_hash != getHash()) return -1;

    thislen = this->_decodeNoHash(buf, offset + pos, maxlen - pos);
    if (thislen < 0) return thislen; else pos += thislen;

    return pos;
}

int robot_plan_t::getEncodedSize() const
{
    return 8 + _getEncodedSizeNoHash();
}

int64_t robot_plan_t::getHash()
{
    static int64_t hash = static_cast<int64_t>(_computeHash(NULL));
    return hash;
}

const char* robot_plan_t::getTypeName()
{
    return "robot_plan_t";
}

int robot_plan_t::_encodeNoHash(void *buf, int offset, int maxlen) const
{
    int pos = 0, tlen;

    tlen = __int64_t_encode_array(buf, offset + pos, maxlen - pos, &this->utime, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    char* robot_name_cstr = const_cast<char*>(this->robot_name.c_str());
    tlen = __string_encode_array(buf, offset + pos, maxlen - pos, &robot_name_cstr, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __int32_t_encode_array(buf, offset + pos, maxlen - pos, &this->num_states, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    for (int a0 = 0; a0 < this->num_states; a0++) {
        tlen = this->plan[a0]._encodeNoHash(buf, offset + pos, maxlen - pos);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    if(this->num_states > 0) {
        tlen = __int32_t_encode_array(buf, offset + pos, maxlen - pos, &this->plan_info[0], this->num_states);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    tlen = __int32_t_encode_array(buf, offset + pos, maxlen - pos, &this->num_grasp_transitions, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    for (int a0 = 0; a0 < this->num_grasp_transitions; a0++) {
        tlen = this->grasps[a0]._encodeNoHash(buf, offset + pos, maxlen - pos);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    tlen = __int8_t_encode_array(buf, offset + pos, maxlen - pos, &this->left_arm_control_type, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __int8_t_encode_array(buf, offset + pos, maxlen - pos, &this->right_arm_control_type, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __int8_t_encode_array(buf, offset + pos, maxlen - pos, &this->left_leg_control_type, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __int8_t_encode_array(buf, offset + pos, maxlen - pos, &this->right_leg_control_type, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __int32_t_encode_array(buf, offset + pos, maxlen - pos, &this->num_bytes, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    if(this->num_bytes > 0) {
        tlen = __byte_encode_array(buf, offset + pos, maxlen - pos, &this->matlab_data[0], this->num_bytes);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    return pos;
}

int robot_plan_t::_decodeNoHash(const void *buf, int offset, int maxlen)
{
    int pos = 0, tlen;

    tlen = __int64_t_decode_array(buf, offset + pos, maxlen - pos, &this->utime, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    int32_t __robot_name_len__;
    tlen = __int32_t_decode_array(buf, offset + pos, maxlen - pos, &__robot_name_len__, 1);
    if(tlen < 0) return tlen; else pos += tlen;
    if(__robot_name_len__ > maxlen - pos) return -1;
    this->robot_name.assign(static_cast<const char*>(buf) + offset + pos, __robot_name_len__ - 1);
    pos += __robot_name_len__;

    tlen = __int32_t_decode_array(buf, offset + pos, maxlen - pos, &this->num_states, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    try {
        this->plan.resize(this->num_states);
    } catch (...) {
        return -1;
    }
    for (int a0 = 0; a0 < this->num_states; a0++) {
        tlen = this->plan[a0]._decodeNoHash(buf, offset + pos, maxlen - pos);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    if(this->num_states) {
        this->plan_info.resize(this->num_states);
        tlen = __int32_t_decode_array(buf, offset + pos, maxlen - pos, &this->plan_info[0], this->num_states);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    tlen = __int32_t_decode_array(buf, offset + pos, maxlen - pos, &this->num_grasp_transitions, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    try {
        this->grasps.resize(this->num_grasp_transitions);
    } catch (...) {
        return -1;
    }
    for (int a0 = 0; a0 < this->num_grasp_transitions; a0++) {
        tlen = this->grasps[a0]._decodeNoHash(buf, offset + pos, maxlen - pos);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    tlen = __int8_t_decode_array(buf, offset + pos, maxlen - pos, &this->left_arm_control_type, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __int8_t_decode_array(buf, offset + pos, maxlen - pos, &this->right_arm_control_type, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __int8_t_decode_array(buf, offset + pos, maxlen - pos, &this->left_leg_control_type, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __int8_t_decode_array(buf, offset + pos, maxlen - pos, &this->right_leg_control_type, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __int32_t_decode_array(buf, offset + pos, maxlen - pos, &this->num_bytes, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    if(this->num_bytes) {
        this->matlab_data.resize(this->num_bytes);
        tlen = __byte_decode_array(buf, offset + pos, maxlen - pos, &this->matlab_data[0], this->num_bytes);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    return pos;
}

int robot_plan_t::_getEncodedSizeNoHash() const
{
    int enc_size = 0;
    enc_size += __int64_t_encoded_array_size(NULL, 1);
    enc_size += this->robot_name.size() + 4 + 1;
    enc_size += __int32_t_encoded_array_size(NULL, 1);
    for (int a0 = 0; a0 < this->num_states; a0++) {
        enc_size += this->plan[a0]._getEncodedSizeNoHash();
    }
    enc_size += __int32_t_encoded_array_size(NULL, this->num_states);
    enc_size += __int32_t_encoded_array_size(NULL, 1);
    for (int a0 = 0; a0 < this->num_grasp_transitions; a0++) {
        enc_size += this->grasps[a0]._getEncodedSizeNoHash();
    }
    enc_size += __int8_t_encoded_array_size(NULL, 1);
    enc_size += __int8_t_encoded_array_size(NULL, 1);
    enc_size += __int8_t_encoded_array_size(NULL, 1);
    enc_size += __int8_t_encoded_array_size(NULL, 1);
    enc_size += __int32_t_encoded_array_size(NULL, 1);
    enc_size += __byte_encoded_array_size(NULL, this->num_bytes);
    return enc_size;
}

uint64_t robot_plan_t::_computeHash(const __lcm_hash_ptr *p)
{
    const __lcm_hash_ptr *fp;
    for(fp = p; fp != NULL; fp = fp->parent)
        if(fp->v == robot_plan_t::getHash)
            return 0;
    const __lcm_hash_ptr cp = { p, robot_plan_t::getHash };

    uint64_t hash = 0x78a77f5ef28fedeeLL +
         bot_core::robot_state_t::_computeHash(&cp) +
         robotlocomotion::grasp_transition_state_t::_computeHash(&cp);

    return (hash<<1) + ((hash>>63)&1);
}

}

#endif