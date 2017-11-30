/** THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
 * BY HAND!!
 *
 * Generated by lcm-gen
 **/

#ifndef __drake_lcmt_qp_input_hpp__
#define __drake_lcmt_qp_input_hpp__

#include <lcm/lcm_coretypes.h>

#include <vector>
#include "drake/lcmt_contact_information.hpp"
#include "drake/lcmt_desired_body_motion.hpp"
#include "drake/lcmt_desired_dof_motions.hpp"
#include "drake/lcmt_desired_centroidal_momentum_dot.hpp"

namespace drake
{

class lcmt_qp_input
{
    public:
        int64_t    timestamp;

        int32_t    num_contacts;

        std::vector< drake::lcmt_contact_information > contact_information;

        int32_t    num_desired_body_motions;

        std::vector< drake::lcmt_desired_body_motion > desired_body_motions;

        drake::lcmt_desired_dof_motions desired_dof_motions;

        drake::lcmt_desired_centroidal_momentum_dot desired_centroidal_momentum_dot;

        double     w_basis_reg;

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
         * Returns "lcmt_qp_input"
         */
        inline static const char* getTypeName();

        // LCM support functions. Users should not call these
        inline int _encodeNoHash(void *buf, int offset, int maxlen) const;
        inline int _getEncodedSizeNoHash() const;
        inline int _decodeNoHash(const void *buf, int offset, int maxlen);
        inline static uint64_t _computeHash(const __lcm_hash_ptr *p);
};

int lcmt_qp_input::encode(void *buf, int offset, int maxlen) const
{
    int pos = 0, tlen;
    int64_t hash = getHash();

    tlen = __int64_t_encode_array(buf, offset + pos, maxlen - pos, &hash, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = this->_encodeNoHash(buf, offset + pos, maxlen - pos);
    if (tlen < 0) return tlen; else pos += tlen;

    return pos;
}

int lcmt_qp_input::decode(const void *buf, int offset, int maxlen)
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

int lcmt_qp_input::getEncodedSize() const
{
    return 8 + _getEncodedSizeNoHash();
}

int64_t lcmt_qp_input::getHash()
{
    static int64_t hash = static_cast<int64_t>(_computeHash(NULL));
    return hash;
}

const char* lcmt_qp_input::getTypeName()
{
    return "lcmt_qp_input";
}

int lcmt_qp_input::_encodeNoHash(void *buf, int offset, int maxlen) const
{
    int pos = 0, tlen;

    tlen = __int64_t_encode_array(buf, offset + pos, maxlen - pos, &this->timestamp, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __int32_t_encode_array(buf, offset + pos, maxlen - pos, &this->num_contacts, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    for (int a0 = 0; a0 < this->num_contacts; a0++) {
        tlen = this->contact_information[a0]._encodeNoHash(buf, offset + pos, maxlen - pos);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    tlen = __int32_t_encode_array(buf, offset + pos, maxlen - pos, &this->num_desired_body_motions, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    for (int a0 = 0; a0 < this->num_desired_body_motions; a0++) {
        tlen = this->desired_body_motions[a0]._encodeNoHash(buf, offset + pos, maxlen - pos);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    tlen = this->desired_dof_motions._encodeNoHash(buf, offset + pos, maxlen - pos);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = this->desired_centroidal_momentum_dot._encodeNoHash(buf, offset + pos, maxlen - pos);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __double_encode_array(buf, offset + pos, maxlen - pos, &this->w_basis_reg, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    return pos;
}

int lcmt_qp_input::_decodeNoHash(const void *buf, int offset, int maxlen)
{
    int pos = 0, tlen;

    tlen = __int64_t_decode_array(buf, offset + pos, maxlen - pos, &this->timestamp, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __int32_t_decode_array(buf, offset + pos, maxlen - pos, &this->num_contacts, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    try {
        this->contact_information.resize(this->num_contacts);
    } catch (...) {
        return -1;
    }
    for (int a0 = 0; a0 < this->num_contacts; a0++) {
        tlen = this->contact_information[a0]._decodeNoHash(buf, offset + pos, maxlen - pos);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    tlen = __int32_t_decode_array(buf, offset + pos, maxlen - pos, &this->num_desired_body_motions, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    try {
        this->desired_body_motions.resize(this->num_desired_body_motions);
    } catch (...) {
        return -1;
    }
    for (int a0 = 0; a0 < this->num_desired_body_motions; a0++) {
        tlen = this->desired_body_motions[a0]._decodeNoHash(buf, offset + pos, maxlen - pos);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    tlen = this->desired_dof_motions._decodeNoHash(buf, offset + pos, maxlen - pos);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = this->desired_centroidal_momentum_dot._decodeNoHash(buf, offset + pos, maxlen - pos);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = __double_decode_array(buf, offset + pos, maxlen - pos, &this->w_basis_reg, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    return pos;
}

int lcmt_qp_input::_getEncodedSizeNoHash() const
{
    int enc_size = 0;
    enc_size += __int64_t_encoded_array_size(NULL, 1);
    enc_size += __int32_t_encoded_array_size(NULL, 1);
    for (int a0 = 0; a0 < this->num_contacts; a0++) {
        enc_size += this->contact_information[a0]._getEncodedSizeNoHash();
    }
    enc_size += __int32_t_encoded_array_size(NULL, 1);
    for (int a0 = 0; a0 < this->num_desired_body_motions; a0++) {
        enc_size += this->desired_body_motions[a0]._getEncodedSizeNoHash();
    }
    enc_size += this->desired_dof_motions._getEncodedSizeNoHash();
    enc_size += this->desired_centroidal_momentum_dot._getEncodedSizeNoHash();
    enc_size += __double_encoded_array_size(NULL, 1);
    return enc_size;
}

uint64_t lcmt_qp_input::_computeHash(const __lcm_hash_ptr *p)
{
    const __lcm_hash_ptr *fp;
    for(fp = p; fp != NULL; fp = fp->parent)
        if(fp->v == lcmt_qp_input::getHash)
            return 0;
    const __lcm_hash_ptr cp = { p, lcmt_qp_input::getHash };

    uint64_t hash = 0xbfdc2566b13afd62LL +
         drake::lcmt_contact_information::_computeHash(&cp) +
         drake::lcmt_desired_body_motion::_computeHash(&cp) +
         drake::lcmt_desired_dof_motions::_computeHash(&cp) +
         drake::lcmt_desired_centroidal_momentum_dot::_computeHash(&cp);

    return (hash<<1) + ((hash>>63)&1);
}

}

#endif
