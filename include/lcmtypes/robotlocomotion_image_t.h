// THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
// BY HAND!!
//
// Generated by lcm-gen

#ifndef _robotlocomotion_image_t_h
#define _robotlocomotion_image_t_h

#include <stdint.h>
#include <stdlib.h>
#include <lcm/lcm_coretypes.h>
#include <lcm/lcm.h>

#ifdef __cplusplus
extern "C" {
#endif

#include "robotlocomotion_header_t.h"
#define ROBOTLOCOMOTION_IMAGE_T_PIXEL_FORMAT_GRAY 0
#define ROBOTLOCOMOTION_IMAGE_T_PIXEL_FORMAT_RGB 1
#define ROBOTLOCOMOTION_IMAGE_T_PIXEL_FORMAT_BGR 2
#define ROBOTLOCOMOTION_IMAGE_T_PIXEL_FORMAT_RGBA 3
#define ROBOTLOCOMOTION_IMAGE_T_PIXEL_FORMAT_BGRA 4
#define ROBOTLOCOMOTION_IMAGE_T_PIXEL_FORMAT_DEPTH 5
#define ROBOTLOCOMOTION_IMAGE_T_PIXEL_FORMAT_LABEL 6
#define ROBOTLOCOMOTION_IMAGE_T_PIXEL_FORMAT_MASK 7
#define ROBOTLOCOMOTION_IMAGE_T_PIXEL_FORMAT_DISPARITY 8
#define ROBOTLOCOMOTION_IMAGE_T_PIXEL_FORMAT_BAYER_BGGR 9
#define ROBOTLOCOMOTION_IMAGE_T_PIXEL_FORMAT_BAYER_RGGB 10
#define ROBOTLOCOMOTION_IMAGE_T_PIXEL_FORMAT_BAYER_GBRG 11
#define ROBOTLOCOMOTION_IMAGE_T_PIXEL_FORMAT_BAYER_GRBG 12
#define ROBOTLOCOMOTION_IMAGE_T_PIXEL_FORMAT_INVALID -1
#define ROBOTLOCOMOTION_IMAGE_T_CHANNEL_TYPE_INT8 0
#define ROBOTLOCOMOTION_IMAGE_T_CHANNEL_TYPE_UINT8 1
#define ROBOTLOCOMOTION_IMAGE_T_CHANNEL_TYPE_INT16 2
#define ROBOTLOCOMOTION_IMAGE_T_CHANNEL_TYPE_UINT16 3
#define ROBOTLOCOMOTION_IMAGE_T_CHANNEL_TYPE_INT32 4
#define ROBOTLOCOMOTION_IMAGE_T_CHANNEL_TYPE_UINT32 5
#define ROBOTLOCOMOTION_IMAGE_T_CHANNEL_TYPE_FLOAT32 6
#define ROBOTLOCOMOTION_IMAGE_T_CHANNEL_TYPE_FLOAT64 7
#define ROBOTLOCOMOTION_IMAGE_T_CHANNEL_TYPE_INVALID -1
#define ROBOTLOCOMOTION_IMAGE_T_COMPRESSION_METHOD_NOT_COMPRESSED 0
#define ROBOTLOCOMOTION_IMAGE_T_COMPRESSION_METHOD_ZLIB 1
#define ROBOTLOCOMOTION_IMAGE_T_COMPRESSION_METHOD_JPEG 2
#define ROBOTLOCOMOTION_IMAGE_T_COMPRESSION_METHOD_PNG 3
#define ROBOTLOCOMOTION_IMAGE_T_COMPRESSION_METHOD_INVALID -1

/// A representation of an image.
typedef struct _robotlocomotion_image_t robotlocomotion_image_t;
struct _robotlocomotion_image_t
{
    robotlocomotion_header_t header;
    int32_t    width;
    int32_t    height;
    int32_t    row_stride;
    int32_t    size;
    uint8_t    *data;
    int8_t     bigendian;
    int8_t     pixel_format;
    int8_t     channel_type;
    int8_t     compression_method;
};

/**
 * Create a deep copy of a robotlocomotion_image_t.
 * When no longer needed, destroy it with robotlocomotion_image_t_destroy()
 */
robotlocomotion_image_t* robotlocomotion_image_t_copy(const robotlocomotion_image_t* to_copy);

/**
 * Destroy an instance of robotlocomotion_image_t created by robotlocomotion_image_t_copy()
 */
void robotlocomotion_image_t_destroy(robotlocomotion_image_t* to_destroy);

/**
 * Identifies a single subscription.  This is an opaque data type.
 */
typedef struct _robotlocomotion_image_t_subscription_t robotlocomotion_image_t_subscription_t;

/**
 * Prototype for a callback function invoked when a message of type
 * robotlocomotion_image_t is received.
 */
typedef void(*robotlocomotion_image_t_handler_t)(const lcm_recv_buf_t *rbuf,
             const char *channel, const robotlocomotion_image_t *msg, void *userdata);

/**
 * Publish a message of type robotlocomotion_image_t using LCM.
 *
 * @param lcm The LCM instance to publish with.
 * @param channel The channel to publish on.
 * @param msg The message to publish.
 * @return 0 on success, <0 on error.  Success means LCM has transferred
 * responsibility of the message data to the OS.
 */
int robotlocomotion_image_t_publish(lcm_t *lcm, const char *channel, const robotlocomotion_image_t *msg);

/**
 * Subscribe to messages of type robotlocomotion_image_t using LCM.
 *
 * @param lcm The LCM instance to subscribe with.
 * @param channel The channel to subscribe to.
 * @param handler The callback function invoked by LCM when a message is received.
 *                This function is invoked by LCM during calls to lcm_handle() and
 *                lcm_handle_timeout().
 * @param userdata An opaque pointer passed to @p handler when it is invoked.
 * @return 0 on success, <0 if an error occured
 */
robotlocomotion_image_t_subscription_t* robotlocomotion_image_t_subscribe(lcm_t *lcm, const char *channel, robotlocomotion_image_t_handler_t handler, void *userdata);

/**
 * Removes and destroys a subscription created by robotlocomotion_image_t_subscribe()
 */
int robotlocomotion_image_t_unsubscribe(lcm_t *lcm, robotlocomotion_image_t_subscription_t* hid);

/**
 * Sets the queue capacity for a subscription.
 * Some LCM providers (e.g., the default multicast provider) are implemented
 * using a background receive thread that constantly revceives messages from
 * the network.  As these messages are received, they are buffered on
 * per-subscription queues until dispatched by lcm_handle().  This function
 * how many messages are queued before dropping messages.
 *
 * @param subs the subscription to modify.
 * @param num_messages The maximum number of messages to queue
 *  on the subscription.
 * @return 0 on success, <0 if an error occured
 */
int robotlocomotion_image_t_subscription_set_queue_capacity(robotlocomotion_image_t_subscription_t* subs,
                              int num_messages);

/**
 * Encode a message of type robotlocomotion_image_t into binary form.
 *
 * @param buf The output buffer.
 * @param offset Encoding starts at this byte offset into @p buf.
 * @param maxlen Maximum number of bytes to write.  This should generally
 *               be equal to robotlocomotion_image_t_encoded_size().
 * @param msg The message to encode.
 * @return The number of bytes encoded, or <0 if an error occured.
 */
int robotlocomotion_image_t_encode(void *buf, int offset, int maxlen, const robotlocomotion_image_t *p);

/**
 * Decode a message of type robotlocomotion_image_t from binary form.
 * When decoding messages containing strings or variable-length arrays, this
 * function may allocate memory.  When finished with the decoded message,
 * release allocated resources with robotlocomotion_image_t_decode_cleanup().
 *
 * @param buf The buffer containing the encoded message
 * @param offset The byte offset into @p buf where the encoded message starts.
 * @param maxlen The maximum number of bytes to read while decoding.
 * @param msg Output parameter where the decoded message is stored
 * @return The number of bytes decoded, or <0 if an error occured.
 */
int robotlocomotion_image_t_decode(const void *buf, int offset, int maxlen, robotlocomotion_image_t *msg);

/**
 * Release resources allocated by robotlocomotion_image_t_decode()
 * @return 0
 */
int robotlocomotion_image_t_decode_cleanup(robotlocomotion_image_t *p);

/**
 * Check how many bytes are required to encode a message of type robotlocomotion_image_t
 */
int robotlocomotion_image_t_encoded_size(const robotlocomotion_image_t *p);

// LCM support functions. Users should not call these
int64_t __robotlocomotion_image_t_get_hash(void);
uint64_t __robotlocomotion_image_t_hash_recursive(const __lcm_hash_ptr *p);
int __robotlocomotion_image_t_encode_array(void *buf, int offset, int maxlen, const robotlocomotion_image_t *p, int elements);
int __robotlocomotion_image_t_decode_array(const void *buf, int offset, int maxlen, robotlocomotion_image_t *p, int elements);
int __robotlocomotion_image_t_decode_array_cleanup(robotlocomotion_image_t *p, int elements);
int __robotlocomotion_image_t_encoded_array_size(const robotlocomotion_image_t *p, int elements);
int __robotlocomotion_image_t_clone_array(const robotlocomotion_image_t *p, robotlocomotion_image_t *q, int elements);

#ifdef __cplusplus
}
#endif

#endif