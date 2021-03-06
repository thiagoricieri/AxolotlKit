//
//  PrekeyWhisperMessage.h
//  AxolotlKit
//
//  Created by Frederic Jacobs on 23/07/14.
//  Copyright (c) 2014 Frederic Jacobs. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WhisperMessage.h"

@interface PreKeyWhisperMessage : NSObject <CipherMessage>

- (instancetype)initWithData:(NSData *)serialized;

- (instancetype)initWithWhisperMessage:(WhisperMessage*)whisperMessage registrationId:(long)registrationId prekeyId:(int)prekeyId signedPrekeyId:(int)signedPrekeyId baseKey:(NSData*)baseKey identityKey:(NSData*)identityKey;

@property (nonatomic, readonly) int            version;
@property (nonatomic, readonly) NSData         *senderRatchetKey;
@property (nonatomic, readonly) int            previousCounter;
@property (nonatomic, readonly) int            counter;
@property (nonatomic, readonly) NSData         *cipherText;
@property (nonatomic, readonly) NSData         *serialized;
@property (nonatomic, readonly) long           registrationId;
@property (nonatomic, readonly) int            prekeyID;
@property (nonatomic, readonly) int            signedPrekeyId;
@property (nonatomic, readonly) NSData         *baseKey;
@property (nonatomic, readonly) NSData         *identityKey;
@property (nonatomic, readonly) WhisperMessage *message;

@end
