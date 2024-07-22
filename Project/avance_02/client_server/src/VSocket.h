
/**
 *
 **/

#ifndef VSocket_h
#define VSocket_h
 
class VSocket {
   public:
       void InitVSocket( char, bool=false );
       void InitVSocket( int );
      ~VSocket();

      void createPeer( void *, int );

      void Close();
      int DoConnect( const char *, int );
      int DoConnect( const char *, const char * );
      virtual int Connect( const char *, int ) = 0;
      virtual int Connect( const char *, const char * ) = 0;

      virtual size_t Read( void *, size_t ) = 0;
      virtual size_t Write( const void *, size_t ) = 0;
      virtual size_t Write( const char * ) = 0;
      int Listen( int );
      int Bind( int );
      int DoAccept();
      virtual VSocket * Accept() = 0;
      int Shutdown( int );
      size_t sendTo( const void *, size_t, void * );
      size_t recvFrom( void *, size_t, void * );


   protected:
      int idSocket;
      bool IPv6;
      int port;
        
};

#endif // VSocket_h

