FROM microsoft/aspnetcore:1.1.2

WORKDIR /app
COPY published ./

# Expose ports
EXPOSE 80

ENTRYPOINT ["dotnet", "aspnetapp.dll"]